import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
from robdep_interfaces.msg import BlobList, BlobData

class BlobDetector(Node):
    def __init__(self):
        super().__init__('subscriber')

        self.subscription = self.create_subscription(
            Image, '/color/preview/image', self.listener_callback, 100)
        self.br = CvBridge()
        self.subscription
        self.lower_blue = np.array([110, 50, 50])
        self.upper_blue = np.array([130, 255, 255])
        self.lower_red_1 = np.array([0,50,50])
        self.lower_red_2 = np.array([165,50,50])
        self.upper_red_1 = np.array([15,255,255])
        self.upper_red_2 = np.array([180,255,255])
        self.lower_green = np.array([65, 50, 50])
        self.upper_green = np.array([80, 255,255])

        self.blobs_b = BlobData()
        self.blobs_g = BlobData()
        self.blobs_r = BlobData()
        self.kernel = np.ones((5,5), np.uint8)

        self.blobs = BlobList()

        self.publisher_ = self.create_publisher(BlobList, 'blobs_list', 100)
        timer_period = 1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)


    def listener_callback(self, data):
        self.get_logger().info('Receiving video frame')

        # MASKING FRAME
        current_frame = self.br.imgmsg_to_cv2(data)
        # current_frame = cv2.filter2D(current_frame, -1, np.array([[-1,-1,-1], [-1,9,-1], [-1,-1,-1]]))
        # current_frame = cv2.blur(current_frame, (5,5))
        # current_frame = cv2.resize(current_frame, (300, 300), interpolation = cv2.INTER_AREA)
        hsv_current_frame = cv2.cvtColor(current_frame, cv2.COLOR_BGR2HSV)
        mask_blue = cv2.inRange(hsv_current_frame, self.lower_blue, self.upper_blue)
        mask_red_1 = cv2.inRange(hsv_current_frame, self.lower_red_1, self.upper_red_1)
        mask_red_2 = cv2.inRange(hsv_current_frame, self.lower_red_2, self.upper_red_2)
        mask_red = mask_red_1 + mask_red_2
        mask_green = cv2.inRange(hsv_current_frame, self.lower_green, self.upper_green)
        # mask_blue  = cv2.erode(mask_blue, self.kernel, iterations=1)
        # mask_blue = cv2.dilate(mask_blue, self.kernel, iterations=1)
        # mask_green  = cv2.erode(mask_green, self.kernel, iterations=1)
        # mask_green = cv2.dilate(mask_green, self.kernel, iterations=1)
        # mask_red  = cv2.erode(mask_red, self.kernel, iterations=1)
        # mask_red = cv2.dilate(mask_red, self.kernel, iterations=1)
#        cv2.imshow('Green Mask',mask_green)
#        cv2.imshow('Blue Mask',mask_blue)
#        cv2.imshow('Red Mask',mask_red)

        min_size = 100
                
        green_cnts, _ = cv2.findContours(mask_green, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
        green_cnts = [c for c in green_cnts if cv2.contourArea(c) > min_size]
        sorted(green_cnts, key=cv2.contourArea, reverse=True)

        for c in green_cnts:
            m = cv2.moments(c)
            self.blobs_g.x_point = float(m["m10"] / m["m00"])
            self.blobs_g.y_point = float(m["m01"] / m["m00"])
            self.blobs_g.size = cv2.contourArea(c)
            self.blobs_g.color = "GREEN"
            self.blobs.data.append(self.blobs_g)


        # BLOB DETECTOR
        # params = cv2.SimpleBlobDetector_Params()

        # # Change thresholds
        # params.minThreshold = 10
        # # params.maxThreshold = 200

        # # Filter by Area.
        # params.filterByArea = True
        # params.minArea = 100

        # # Create a detector with the parameters
        # detector = cv2.SimpleBlobDetector_create(params)

        # keypoints_b = detector.detect(mask_blue)
        # # sorted(keypoints_b, key=lambda a: a[2])
        # keypoints_g = detector.detect(mask_green)
        # # sorted(keypoints_g, key=lambda a: a[2])
        # keypoints_r = detector.detect(mask_red)
        # # sorted(keypoints_r, key=lambda a: a[2])


        # if len(keypoints_b) != 0:
        #     for i in range(len(keypoints_b)):
        #         self.blobs_b.x_point = keypoints_b[i].pt[0]
        #         self.blobs_b.y_point = keypoints_b[i].pt[1]
        #         self.blobs_b.size = keypoints_b[i].size
        #         self.blobs_b.color = "blue"
        #         # print(keypoints_b[i])
        #         # self.blobs.data.append(self.blobs_b)

        # if len(keypoints_g) != 0:
        #     for i in range(len(keypoints_g)):
        #         self.blobs_g.x_point = keypoints_g[i].pt[0]
        #         self.blobs_g.y_point = keypoints_g[i].pt[1]
        #         self.blobs_g.size = keypoints_g[i].size     
        #         self.blobs_g.color = "green"
        #         # print(keypoints_g[i])
        #         # self.blobs.data.append(self.blobs_g)


        # if len(keypoints_r) != 0:
        #     for i in range(len(keypoints_r)):
        #         self.blobs_r.x_point = keypoints_r[i].pt[0]
        #         self.blobs_r.y_point = keypoints_r[i].pt[1]
        #         self.blobs_r.size = keypoints_r[i].size
        #         self.blobs_r.color = "red"
        #         self.blobs.data.append(self.blobs_r)

        # print(self.blobs)
#        cv2.waitKey(1)


    def timer_callback(self):
        self.publisher_.publish(self.blobs)


def main(args=None):

    rclpy.init(args=args)
    blob_detector = BlobDetector()
    rclpy.spin(blob_detector)
    blob_detector.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
    

