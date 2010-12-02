#include <pluginlib/class_list_macros.h>
#include <message_transport/raw_publisher.h>
#include <message_transport/raw_subscriber.h>
#include <sharedmem_transport/sharedmem_publisher.h>
#include <sharedmem_transport/sharedmem_subscriber.h>
#include <udpmulti_transport/udpmulti_publisher.h>
#include <udpmulti_transport/udpmulti_subscriber.h>
#include <pointcloud_transport_base/decimated_publisher.h>
#include <pointcloud_transport_base/decimated_subscriber.h>
#include <sensor_msgs/PointCloud.h>

// Raw class
PLUGINLIB_REGISTER_CLASS(raw_pub, message_transport::RawPublisher<sensor_msgs::PointCloud>, message_transport::PublisherPlugin<sensor_msgs::PointCloud>)
PLUGINLIB_REGISTER_CLASS(raw_sub, message_transport::RawSubscriber<sensor_msgs::PointCloud>, message_transport::SubscriberPlugin<sensor_msgs::PointCloud>)

// Sharedmem class
PLUGINLIB_REGISTER_CLASS(sharedmem_pub, sharedmem_transport::SharedmemPublisherWithHeader<sensor_msgs::PointCloud>, message_transport::PublisherPlugin<sensor_msgs::PointCloud>)
PLUGINLIB_REGISTER_CLASS(sharedmem_sub, sharedmem_transport::SharedmemSubscriber<sensor_msgs::PointCloud>, message_transport::SubscriberPlugin<sensor_msgs::PointCloud>)

// Decimated class
PLUGINLIB_REGISTER_CLASS(decimated_pub, decimated_transport::DecimatedPublisher, message_transport::PublisherPlugin<sensor_msgs::PointCloud>)
PLUGINLIB_REGISTER_CLASS(decimated_sub, decimated_transport::DecimatedSubscriber, message_transport::SubscriberPlugin<sensor_msgs::PointCloud>)

// UDP multi-casting class
PLUGINLIB_REGISTER_CLASS(udpmulti_pub, udpmulti_transport::UDPMultiPublisher<sensor_msgs::PointCloud>, message_transport::PublisherPlugin<sensor_msgs::PointCloud>)
PLUGINLIB_REGISTER_CLASS(udpmulti_sub, udpmulti_transport::UDPMultiSubscriber<sensor_msgs::PointCloud>, message_transport::SubscriberPlugin<sensor_msgs::PointCloud>)
