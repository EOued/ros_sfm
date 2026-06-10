// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sfm_ros2:msg/Link.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfm_ros2/msg/link.h"


#ifndef SFM_ROS2__MSG__DETAIL__LINK__STRUCT_H_
#define SFM_ROS2__MSG__DETAIL__LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

/// Struct defined in msg/Link in the package sfm_ros2.
typedef struct sfm_ros2__msg__Link
{
  int32_t from_id;
  int32_t to_id;
  int32_t type;
  geometry_msgs__msg__TransformStamped transform;
  double information[36];
} sfm_ros2__msg__Link;

// Struct for a sequence of sfm_ros2__msg__Link.
typedef struct sfm_ros2__msg__Link__Sequence
{
  sfm_ros2__msg__Link * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfm_ros2__msg__Link__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SFM_ROS2__MSG__DETAIL__LINK__STRUCT_H_
