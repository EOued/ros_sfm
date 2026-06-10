// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sfm_ros2:msg/Link.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfm_ros2/msg/link.hpp"


#ifndef SFM_ROS2__MSG__DETAIL__LINK__TRAITS_HPP_
#define SFM_ROS2__MSG__DETAIL__LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sfm_ros2/msg/detail/link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"

namespace sfm_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const Link & msg,
  std::ostream & out)
{
  out << "{";
  // member: from_id
  {
    out << "from_id: ";
    rosidl_generator_traits::value_to_yaml(msg.from_id, out);
    out << ", ";
  }

  // member: to_id
  {
    out << "to_id: ";
    rosidl_generator_traits::value_to_yaml(msg.to_id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: transform
  {
    out << "transform: ";
    to_flow_style_yaml(msg.transform, out);
    out << ", ";
  }

  // member: information
  {
    if (msg.information.size() == 0) {
      out << "information: []";
    } else {
      out << "information: [";
      size_t pending_items = msg.information.size();
      for (auto item : msg.information) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Link & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: from_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_id: ";
    rosidl_generator_traits::value_to_yaml(msg.from_id, out);
    out << "\n";
  }

  // member: to_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "to_id: ";
    rosidl_generator_traits::value_to_yaml(msg.to_id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transform:\n";
    to_block_style_yaml(msg.transform, out, indentation + 2);
  }

  // member: information
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.information.size() == 0) {
      out << "information: []\n";
    } else {
      out << "information:\n";
      for (auto item : msg.information) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Link & msg, bool use_flow_style = false)
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
  const sfm_ros2::msg::Link & msg,
  std::ostream & out, size_t indentation = 0)
{
  sfm_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sfm_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const sfm_ros2::msg::Link & msg)
{
  return sfm_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sfm_ros2::msg::Link>()
{
  return "sfm_ros2::msg::Link";
}

template<>
inline const char * name<sfm_ros2::msg::Link>()
{
  return "sfm_ros2/msg/Link";
}

template<>
struct has_fixed_size<sfm_ros2::msg::Link>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::TransformStamped>::value> {};

template<>
struct has_bounded_size<sfm_ros2::msg::Link>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::TransformStamped>::value> {};

template<>
struct is_message<sfm_ros2::msg::Link>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SFM_ROS2__MSG__DETAIL__LINK__TRAITS_HPP_
