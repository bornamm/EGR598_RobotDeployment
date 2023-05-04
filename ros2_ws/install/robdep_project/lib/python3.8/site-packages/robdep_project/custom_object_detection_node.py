import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Point
import cv2
from cv_bridge import CvBridge
import torch


class YOLOv5Node(Node):
    def __init__(self):
        super().__init__("yolov5_node")
        self.subscription = self.create_subscription(
            Image, "/color/preview/image", self.image_callback, 1)
        self.cv_bridge = CvBridge()
        self.publisher = self.create_publisher(Point, "/object_center", 1)

        # Load the YOLOv5 model with torch.hub.load()
        self.model = torch.hub.load(
            'ultralytics/yolov5', 'custom', path='/home/ubuntu/project/best.pt', force_reload=True)
        self.q_model = torch.quantization.quantize_dynamic(
            self.model, {torch.nn.Linear}, dtype=torch.qint8)

    def image_callback(self, msg):
        # Convert image message to OpenCV image
        cv_image = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
        results = self.q_model(cv_image)

        # Extract confidence, center of bounding box, and class information from results.pandas().xywhn
        confidences = results.xywh[0][..., 4].numpy().tolist()
        centers_x = results.xywh[0][..., 0].numpy().tolist()
        heights = results.xywh[0][..., 3].numpy().tolist()
        widths = results.xywh[0][..., 2].numpy().tolist() 
        centers_y = results.xywh[0][..., 1].numpy().tolist()
        classes = results.xywh[0][..., 5].numpy().astype(int).tolist()

        if confidences:
            # Find the index of the class with the highest confidence
            max_confidence_index = confidences.index(max(confidences))

            # Get the center point of the class with the highest confidence
            center_x = centers_x[max_confidence_index]
            center_y = centers_y[max_confidence_index]
            height = heights[max_confidence_index]
            width = widths[max_confidence_index]

            # Create a Point message to hold the center point
            center_point = Point()
            center_point.x = center_x
            center_point.y = center_y
            center_point.z = height*width

            # Publish the center point
            self.publisher.publish(center_point)

            # Print the extracted information to the console
            print("Confidences: ", confidences)
            print("Center X: ", center_x)
            print("Center Y: ", center_y)
            print("Classes: ", classes)
            print("Area: ", center_point.z)

            # TODO: Add your logic for further processing the extracted information here
        else:
            print("No object detected.")
            center_point = Point()
            center_point.x = 125.0
            center_point.y = 125.0
            center_point.z = 0.0

            # Publish the center point
            self.publisher.publish(center_point)


def main(args=None):
    rclpy.init(args=args)
    node = YOLOv5Node()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
