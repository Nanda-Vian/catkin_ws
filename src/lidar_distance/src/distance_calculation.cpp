#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <math.h>

void laserScanCallback(const sensor_msgs::LaserScan::ConstPtr& msg)
{
    // Define constants for angle and distance limits
    const float MIN_ANGLE = -M_PI / 4.0; // -45 degrees
    const float MAX_ANGLE = M_PI / 4.0;  // 45 degrees
    const float MIN_DISTANCE = 0.05;     // 5 cm
    const float MAX_DISTANCE = 5.0;      // 5 m

    // Get the range and angle data from the laser scan message
    std::vector<float> ranges = msg->ranges;
    std::vector<float> angles = msg->angle_min + msg->angle_increment * 
                                std::vector<float>(ranges.size());


    // Output the closest obstacle distance and angle to the console
    ROS_INFO(" distance: %f", closest_range);
    ROS_INFO("angle: %f", closest_angle);
}

int main(int argc, char **argv)
{
    // Initialize the ROS node
    ros::init(argc, argv, "obstacle_distance_node");
    ros::NodeHandle nh;

    // Subscribe to the laser scan topic
    ros::Subscriber sub = nh.subscribe<sensor_msgs::LaserScan>("/scan", 1, laserScanCallback);

    // Spin the node
    ros::spin();

    return 0;
}
