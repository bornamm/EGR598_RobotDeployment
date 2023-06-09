# EGR 598: Robot deployment object detection and tracking using Turtlebot4

## Introduction

**Team members:**
* **_Borna M._** _(bmansoo1@asu.edu)_
* **_Roberto S._** _(rsiquei2@asu.edu)_
* **_Panth P._** _(ppate137@asu.edu)_

[Elevator Pitch](/elevator_pitch_take_1.mp4)

## Project milestones
![image caption](/Ganttchart.jpg)

## Files
* [Report](/FinalReportTeam03.html)
* [Download PDF Report](/Final Report - Team 03.pdf)
* [Dataset link](https://app.roboflow.com/robdep/robdep_project/deploy/2)
* [Download dataset YOLOv5 zip](robdep_project_YOLOv5.zip)
* [YOLOv5 Training Script](/YOLOv5_Custom_Training.html)
* [Download YOLOv5 Training Notebook](/YOLOv5_Custom_Training.ipynb)
* [Download ROS Workspace](/ROSPackage.zip)

## Project Objective

This project consists of creating a custom data set using the Turtlebot’s OAK-D camera. The custom dataset is then used to train a model using the Yolo v5 Nano architecture for object detection. In this case, the model was trained to detect an orange and a book. The trained model is then incorporated into a node, called custom_object_detection_node, that is used to extract the bounding box attributes of the detected object. Such attributes are the center point x , center point y, and the area of the bounding box. The extracted data is then published by the custom_object_detection_node node. Next, a node called controller subscribes to the topic being published by the custom_object_detection_node node. The data obtained by the controller node is used to write commands to the /cmd_vel topic and actuate the Turtlebot wheels. The controller node has a PID controller that is used on velocity commands of the Turtlebot to calculate the velocity based on the data received.

## Video Results

* [Video 1 - Camera View](/CameraView.mp4)
* [Video 2 - Screen View](/ScreenView.mp4)

## External Links

* [link to idealab](https://idealab.asu.edu)
* [link to Robot Deployment](https://robot-deployment.bitbucket.io/)
* [YOLOv5](https://github.com/ultralytics/yolov5)


