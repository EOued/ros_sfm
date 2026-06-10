// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sfm_ros2:msg/MapGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfm_ros2/msg/map_graph.hpp"


#ifndef SFM_ROS2__MSG__DETAIL__MAP_GRAPH__BUILDER_HPP_
#define SFM_ROS2__MSG__DETAIL__MAP_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sfm_ros2/msg/detail/map_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sfm_ros2
{

namespace msg
{

namespace builder
{

class Init_MapGraph_links
{
public:
  explicit Init_MapGraph_links(::sfm_ros2::msg::MapGraph & msg)
  : msg_(msg)
  {}
  ::sfm_ros2::msg::MapGraph links(::sfm_ros2::msg::MapGraph::_links_type arg)
  {
    msg_.links = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfm_ros2::msg::MapGraph msg_;
};

class Init_MapGraph_poses
{
public:
  explicit Init_MapGraph_poses(::sfm_ros2::msg::MapGraph & msg)
  : msg_(msg)
  {}
  Init_MapGraph_links poses(::sfm_ros2::msg::MapGraph::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_MapGraph_links(msg_);
  }

private:
  ::sfm_ros2::msg::MapGraph msg_;
};

class Init_MapGraph_poses_id
{
public:
  explicit Init_MapGraph_poses_id(::sfm_ros2::msg::MapGraph & msg)
  : msg_(msg)
  {}
  Init_MapGraph_poses poses_id(::sfm_ros2::msg::MapGraph::_poses_id_type arg)
  {
    msg_.poses_id = std::move(arg);
    return Init_MapGraph_poses(msg_);
  }

private:
  ::sfm_ros2::msg::MapGraph msg_;
};

class Init_MapGraph_map_to_odom
{
public:
  explicit Init_MapGraph_map_to_odom(::sfm_ros2::msg::MapGraph & msg)
  : msg_(msg)
  {}
  Init_MapGraph_poses_id map_to_odom(::sfm_ros2::msg::MapGraph::_map_to_odom_type arg)
  {
    msg_.map_to_odom = std::move(arg);
    return Init_MapGraph_poses_id(msg_);
  }

private:
  ::sfm_ros2::msg::MapGraph msg_;
};

class Init_MapGraph_header
{
public:
  Init_MapGraph_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapGraph_map_to_odom header(::sfm_ros2::msg::MapGraph::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MapGraph_map_to_odom(msg_);
  }

private:
  ::sfm_ros2::msg::MapGraph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfm_ros2::msg::MapGraph>()
{
  return sfm_ros2::msg::builder::Init_MapGraph_header();
}

}  // namespace sfm_ros2

#endif  // SFM_ROS2__MSG__DETAIL__MAP_GRAPH__BUILDER_HPP_
