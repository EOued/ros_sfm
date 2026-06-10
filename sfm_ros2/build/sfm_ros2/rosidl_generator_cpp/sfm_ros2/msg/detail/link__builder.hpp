// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sfm_ros2:msg/Link.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfm_ros2/msg/link.hpp"


#ifndef SFM_ROS2__MSG__DETAIL__LINK__BUILDER_HPP_
#define SFM_ROS2__MSG__DETAIL__LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sfm_ros2/msg/detail/link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sfm_ros2
{

namespace msg
{

namespace builder
{

class Init_Link_information
{
public:
  explicit Init_Link_information(::sfm_ros2::msg::Link & msg)
  : msg_(msg)
  {}
  ::sfm_ros2::msg::Link information(::sfm_ros2::msg::Link::_information_type arg)
  {
    msg_.information = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sfm_ros2::msg::Link msg_;
};

class Init_Link_transform
{
public:
  explicit Init_Link_transform(::sfm_ros2::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_information transform(::sfm_ros2::msg::Link::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_Link_information(msg_);
  }

private:
  ::sfm_ros2::msg::Link msg_;
};

class Init_Link_type
{
public:
  explicit Init_Link_type(::sfm_ros2::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_transform type(::sfm_ros2::msg::Link::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Link_transform(msg_);
  }

private:
  ::sfm_ros2::msg::Link msg_;
};

class Init_Link_to_id
{
public:
  explicit Init_Link_to_id(::sfm_ros2::msg::Link & msg)
  : msg_(msg)
  {}
  Init_Link_type to_id(::sfm_ros2::msg::Link::_to_id_type arg)
  {
    msg_.to_id = std::move(arg);
    return Init_Link_type(msg_);
  }

private:
  ::sfm_ros2::msg::Link msg_;
};

class Init_Link_from_id
{
public:
  Init_Link_from_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Link_to_id from_id(::sfm_ros2::msg::Link::_from_id_type arg)
  {
    msg_.from_id = std::move(arg);
    return Init_Link_to_id(msg_);
  }

private:
  ::sfm_ros2::msg::Link msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sfm_ros2::msg::Link>()
{
  return sfm_ros2::msg::builder::Init_Link_from_id();
}

}  // namespace sfm_ros2

#endif  // SFM_ROS2__MSG__DETAIL__LINK__BUILDER_HPP_
