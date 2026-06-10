// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sfm_ros2:msg/MapGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfm_ros2/msg/map_graph.h"


#ifndef SFM_ROS2__MSG__DETAIL__MAP_GRAPH__STRUCT_H_
#define SFM_ROS2__MSG__DETAIL__MAP_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'map_to_odom'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"
// Member 'poses_id'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'links'
#include "sfm_ros2/msg/detail/link__struct.h"

/// Struct defined in msg/MapGraph in the package sfm_ros2.
typedef struct sfm_ros2__msg__MapGraph
{
  std_msgs__msg__Header header;
  /// /map to /odom transform
  /// Always identity when the graph is optimized from the latest pose.
  geometry_msgs__msg__TransformStamped map_to_odom;
  /// The poses
  rosidl_runtime_c__int32__Sequence poses_id;
  geometry_msgs__msg__Pose__Sequence poses;
  /// The links
  sfm_ros2__msg__Link__Sequence links;
} sfm_ros2__msg__MapGraph;

// Struct for a sequence of sfm_ros2__msg__MapGraph.
typedef struct sfm_ros2__msg__MapGraph__Sequence
{
  sfm_ros2__msg__MapGraph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sfm_ros2__msg__MapGraph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SFM_ROS2__MSG__DETAIL__MAP_GRAPH__STRUCT_H_
