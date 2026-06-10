#ifndef SFM_H_
#define SFM_H_

//ROS includes
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/logging.hpp"

//all sensor includes
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <nav_msgs/msg/path.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/pose.hpp>

//message filter includes
#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
#include <message_filters/synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>

//pcl includes
#include <pcl/common/eigen.h>
#include <pcl/common/io.h>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <pcl/common/transforms.h>
#include <pcl/filters/filter.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/filters/voxel_grid.h>

//Opencv includes
#include <cv_bridge/cv_bridge.hpp>

//Torch includes
#include <torch/torch.h>
#include <torch/script.h>

//Custom msg includes
#include "sfm_ros2/msg/map_graph.hpp"

//Main sfm class
class semanticSfm
{
private:
    rclcpp::Node::SharedPtr node_;

    std::string rgb_topic_;
    std::string depth_topic_;
    std::string intrensics_topic_;
    std::string extrensics_topic_;
    std::string model_path_;
    float leaf_size_;

    torch::jit::script::Module model; //Model

    using sfmSyncPolicy_ =  
        message_filters::sync_policies::ApproximateTime<
            sensor_msgs::msg::Image,
            sensor_msgs::msg::Image,
            sensor_msgs::msg::CameraInfo,
            nav_msgs::msg::Odometry>;

    message_filters::Subscriber<sensor_msgs::msg::Image> rgbImage_;
    message_filters::Subscriber<sensor_msgs::msg::Image> depthMap_;
    message_filters::Subscriber<sensor_msgs::msg::CameraInfo> cameraIntrensics_;
    message_filters::Subscriber<nav_msgs::msg::Odometry> cameraExtrensics_;

    std::shared_ptr<message_filters::Synchronizer<sfmSyncPolicy_>> sync_;

    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr sfmCloud_;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr sfmTrajectory_;
    rclcpp::Publisher<sfm_ros2::msg::MapGraph>::SharedPtr sfmMapGraph_;
    void sfmCallBack_(
        const sensor_msgs::msg::Image::ConstSharedPtr& img1,
        const sensor_msgs::msg::Image::ConstSharedPtr& img2,
        const sensor_msgs::msg::CameraInfo::ConstSharedPtr& info,
        const nav_msgs::msg::Odometry::ConstSharedPtr& odom);

    Eigen::Matrix4f poseToTransform_(nav_msgs::msg::Odometry pose);
    pcl::PointCloud<pcl::PointXYZRGBL>::Ptr transformCloud_(
        const pcl::PointCloud<pcl::PointXYZRGBL>::Ptr& localCloud, 
        Eigen::Matrix4f transform);
    pcl::PointXYZ projectDepthTo3D_(const cv::Mat depthMap, float w, float h, 
                                    float cx, float cy, float fx, float fy);
    geometry_msgs::msg::PoseStamped navToGeoStampMsg_(
        const nav_msgs::msg::Odometry::ConstSharedPtr& cameraExtrensics);
    cv::Mat forwardPass_(const cv::Mat rgbImage); //Network forward pass
    pcl::PointCloud<pcl::PointXYZRGBL>::Ptr globalCloud;
    pcl::PointCloud<pcl::PointXYZRGBL>::Ptr downsampleCloud_(
        const pcl::PointCloud<pcl::PointXYZRGBL>::Ptr& inputCloud, const float leafSize);
    geometry_msgs::msg::Pose navToGeoMsg_(const nav_msgs::msg::Odometry::ConstSharedPtr& cameraExtrensics);
public:
    semanticSfm(rclcpp::Node::SharedPtr node);
    ~semanticSfm();
};

#endif
