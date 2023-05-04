import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Point
import cv2
from cv_bridge import CvBridge
import torch

class YOLOv5Node(Node):
    def __init__(self):
        super().__init__("custom_object_detection_node")
        self.subscription = self.create_subscription(Image, "/color/preview/image", self.image_callback, 1)
        self.cv_bridge = CvBridge()
        self.publisher = self.create_publisher(Point, "/object_center", 1)

        # Load the YOLOv5 model with torch.hub.load()
        self.model = torch.hub.load('ultralytics/yolov5', 'custom', path='/home/ubuntu/project/best.pt', force_reload=True)
        self.q_model = torch.quantization.quantize_dynamic(self.model, {torch.nn.Linear}, dtype=torch.qint8)
        self.s_model = torch.jit.script(self.q_model)


    def image_callback(self, msg):
        # Convert image message to OpenCV image
        cv_image = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")

        results = self.q_model(cv_image)

        # Extract confidence, center of bounding box, and class information from results.pandas().xywhn
        confidences = results.xywh[0][..., 4].numpy()
        centers_x = results.xywh[0][..., 0].numpy()
        centers_y = results.xywh[0][..., 1].numpy()
        classes = results.xywh[0][..., 5].numpy().astype(int)

        if confidences.size > 0:
            # Find index of class with highest confidence
            highest_confidence_idx = confidences.argmax()

            # Get center_x and center_y of the class with highest confidence
            center_x = centers_x[highest_confidence_idx]
            center_y = centers_y[highest_confidence_idx]
            classID = classes[highest_confidence_idx]
            confidence = confidences[highest_confidence_idx]
            # Create and publish geometry_msgs/Point message
            point_msg = Point()
            point_msg.x = center_x
            point_msg.y = center_y
            point_msg.z = 0.0  # Assuming Z is 0 for 2D space
            self.publisher.publish(point_msg)

            # Print the extracted information to the console
            self.get_logger().info("Confidence: {:.2f}, Class ID: {}, Center X: {:.2f}, Center Y: {:.2f}".format(confidence, classID, center_x, center_y))
        else:
            # If no objects detected, print a message to the console
            self.get_logger().info("No objects detected")

def main(args=None):
    rclpy.init(args=args)
    node = YOLOv5Node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
