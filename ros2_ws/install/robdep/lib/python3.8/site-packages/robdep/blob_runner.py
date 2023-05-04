import rclpy
import numpy
from rclpy.node import Node

from robdep_interfaces.msg import BlobList, BlobData
from geometry_msgs.msg import Twist

Angular_Kp = 0.9
Angular_Ki = 0.105
Angular_Kd = 0.2

Linear_Kp = 0.9
Linear_Ki = 0.105
Linear_Kd = 0.2

dt = 0.1

BobAreaSP = 3500
CenterSP = 120
MinVel = -0.025
MaxVel = 0.025
MinVel_Ang = -0.1
MaxVel_Ang = 0.1

class PIDController:
    def __init__(self, Kp, Ki, Kd, setpoint, MinVel, MaxVel):
        self.Kp = Kp
        self.Ki = Ki
        self.Kd = Kd
        self.setpoint = setpoint
        # buffer
        self.integral = 0
        self.previous_error = 0
        # saturation
        self.MaxVel = MaxVel
        self.MinVel = MinVel

    def sturation(self, x, min_val, max_val):
        y = numpy.clip(x, min_val, max_val)
        return y
    def update(self, process_variable, dt):
        error = self.setpoint - process_variable

        # proportional term
        proportional = self.Kp * error

        # integral term
        self.integral += error * dt
        integral = self.Ki * self.integral

        # derivative term
        derivative = self.Kd * (error - self.previous_error) / dt
        self.previous_error = error

        # output
        outputUnSaturated = proportional + integral + derivative
        output = self.sturation(outputUnSaturated, self.MinVel, self.MaxVel)
        return output

#initialize the controller
Linear_controller = PIDController(Angular_Kp, Angular_Ki, Angular_Kd, BobAreaSP, MinVel, MaxVel)
Angular_controller = PIDController(Linear_Kp, Linear_Ki, Linear_Kd, CenterSP, MinVel_Ang, MaxVel_Ang)

class BlobPrinter(Node):
    def __init__(self):
        super().__init__('blob_printer')
        self.subscription = self.create_subscription(BlobList, '/blobs_list', self.listener_callback, 1)
        self.subscription  # prevent unused variable warning
        self.twist = Twist()

        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 1)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.c_size = 0
        self.cy = 0
        self.cx = 0

    def listener_callback(self, msg):
        blob_data = msg.data[0]
        self.cx = blob_data.x_point
        self.cy = blob_data.y_point
        self.c_size = blob_data.size

    def timer_callback(self):
        # Linear commands
        #self.twist.linear.x = 0.2*(3500 - self.c_size)
        self.twist.linear.x = Linear_controller.update(self.c_size, dt)
        self.twist.linear.y = 0.0
        self.twist.linear.z = 0.0

        # Angular commands
        self.twist.angular.x = 0.0
        self.twist.angular.y = 0.0
        #self.twist.angular.z = 0.2*(self.cx - 125)
        self.twist.angular.z = Angular_controller.update(self.cx, dt)
        self.publisher_.publish(self.twist)

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = BlobPrinter()
    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


