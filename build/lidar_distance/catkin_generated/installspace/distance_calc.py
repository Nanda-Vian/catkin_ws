#!/usr/bin/env python3

import rospy
from sensor_msgs.msg import LaserScan
import math

def laser_scan_callback(msg):
    # Define constants for angle and distance limits
    MIN_ANGLE = -math.pi / 36.0  # -45 degrees
    MAX_ANGLE = math.pi / 36.0   # 45 degrees

    # Get the range and angle data from the laser scan message
    ranges = msg.ranges
    # angles = [msg.angle_min + i * msg.angle_increment for i in len(ranges)]

    # Create variables to store the obstacle ranges and angles
    obstacle_ranges = []
    obstacle_angles = []

   # # Iterate through the ranges and angles to find the obstacles in front of the robot
   # for i in len(ranges):
   #     angle = angles[i]
   #     range = ranges[i]

   #     if angle >= MIN_ANGLE and angle <= MAX_ANGLE:
   #         obstacle_ranges.append(range)
   #         obstacle_angles.append(angle)

    # Output the obstacle distances and angles to the console
    rospy.loginfo(ranges)
    # rospy.loginfo("Obstacle distances: %s", obstacle_ranges)
    # rospy.loginfo("Obstacle angles: %s", obstacle_angles)

def main():
    # Initialize the ROS node
    rospy.init_node("obstacle_detector")

    # Subscribe to the laser scan topic
    rospy.Subscriber("/scan", LaserScan, laser_scan_callback)

    # Spin the node
    rospy.spin()

if __name__ == "__main__":
    main()
