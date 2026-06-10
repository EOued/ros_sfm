// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sfm_ros2:msg/MapGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfm_ros2/msg/map_graph.hpp"


#ifndef SFM_ROS2__MSG__DETAIL__MAP_GRAPH__TRAITS_HPP_
#define SFM_ROS2__MSG__DETAIL__MAP_GRAPH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sfm_ros2/msg/detail/map_graph__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'map_to_odom'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'links'
#include "sfm_ros2/msg/detail/link__traits.hpp"

namespace sfm_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapGraph & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: map_to_odom
  {
    out << "map_to_odom: ";
    to_flow_style_yaml(msg.map_to_odom, out);
    out << ", ";
  }

  // member: poses_id
  {
    if (msg.poses_id.size() == 0) {
      out << "poses_id: []";
    } else {
      out << "poses_id: [";
      size_t pending_items = msg.poses_id.size();
      for (auto item : msg.poses_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: links
  {
    if (msg.links.size() == 0) {
      out << "links: []";
    } else {
      out << "links: [";
      size_t pending_items = msg.links.size();
      for (auto item : msg.links) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapGraph & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: map_to_odom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_to_odom:\n";
    to_block_style_yaml(msg.map_to_odom, out, indentation + 2);
  }

  // member: poses_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses_id.size() == 0) {
      out << "poses_id: []\n";
    } else {
      out << "poses_id:\n";
      for (auto item : msg.poses_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links.size() == 0) {
      out << "links: []\n";
    } else {
      out << "links:\n";
      for (auto item : msg.links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapGraph & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sfm_ros2

namespace rosidl_generator_traits
{

[[deprecated("use sfm_ros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sfm_ros2::msg::MapGraph & msg,
  std::ostream & out, size_t indentation = 0)
{
  sfm_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sfm_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const sfm_ros2::msg::MapGraph & msg)
{
  return sfm_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sfm_ros2::msg::MapGraph>()
{
  return "sfm_ros2::msg::MapGraph";
}

template<>
inline const char * name<sfm_ros2::msg::MapGraph>()
{
  return "sfm_ros2/msg/MapGraph";
}

template<>
struct has_fixed_size<sfm_ros2::msg::MapGraph>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sfm_ros2::msg::MapGraph>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sfm_ros2::msg::MapGraph>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SFM_ROS2__MSG__DETAIL__MAP_GRAPH__TRAITS_HPP_
