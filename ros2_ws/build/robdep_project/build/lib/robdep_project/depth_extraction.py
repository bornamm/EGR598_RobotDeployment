import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Point
from cv_bridge import CvBridge
import numpy as np


class DepthExtraction(Node):
    def __init__(self):
        super().__init__("depth_extraction")

        # Create a subscriber to /stereo/depth topic
        self.depth_sub = self.create_subscription(
            Image, "/stereo/depth", self.depth_callback, 10
        )

        # Create a subscriber to /object_center topic
        self.center_sub = self.create_subscription(
            Point, "/object_center", self.center_callback, 10
        )

        # Create a publisher to /cmd_vel topic
        self.depth_pub = self.create_publisher(Point, "/point_depth", 1)
        self.bridge = CvBridge()
        self.center_x = 0
        self.center_y = 0

    def depth_callback(self, msg):
        # Get the depth image data
        depth_data = msg.data
        depth_data = np.array(depth_data)
        print(depth_data.size)
        # print(type(depth_data))
        # Get the x and y points of the object center
        x = self.center_x
        y = self.center_y
        index = y*250 + x
        # print(depth_data[index])
        # Compute the index of the pixel at (x, y)
        # depth_array = self.bridge.imgmsg_to_cv2(depth_data, desired_encoding='passthrough')
        # depth_value = depth_array[y, x]
        # # # Convert depth value to meters if necessary
        # # if depth_data.encoding == '16UC1':
        # #     depth_value = depth_value * 0.001 
        #     # Publish the depth value to /cmd_vel topic
        # print(depth_value)
        # self.depth_pub(depth_value)
    
    def center_callback(self, msg):
    # Get the x and y points of the object center
        self.center_x = msg.x
        self.center_y = msg.y


def main(args=None):
    rclpy.init(args=args)
    node = DepthExtraction()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
