// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sfm_ros2:msg/MapGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sfm_ros2/msg/detail/map_graph__rosidl_typesupport_introspection_c.h"
#include "sfm_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sfm_ros2/msg/detail/map_graph__functions.h"
#include "sfm_ros2/msg/detail/map_graph__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `map_to_odom`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `map_to_odom`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"
// Member `poses_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `links`
#include "sfm_ros2/msg/link.h"
// Member `links`
#include "sfm_ros2/msg/detail/link__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sfm_ros2__msg__MapGraph__init(message_memory);
}

void sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_fini_function(void * message_memory)
{
  sfm_ros2__msg__MapGraph__fini(message_memory);
}

size_t sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__poses_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__poses_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses_id(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__poses_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses_id(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__poses_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__links(
  const void * untyped_member)
{
  const sfm_ros2__msg__Link__Sequence * member =
    (const sfm_ros2__msg__Link__Sequence *)(untyped_member);
  return member->size;
}

const void * sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__links(
  const void * untyped_member, size_t index)
{
  const sfm_ros2__msg__Link__Sequence * member =
    (const sfm_ros2__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__links(
  void * untyped_member, size_t index)
{
  sfm_ros2__msg__Link__Sequence * member =
    (sfm_ros2__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sfm_ros2__msg__Link * item =
    ((const sfm_ros2__msg__Link *)
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__links(untyped_member, index));
  sfm_ros2__msg__Link * value =
    (sfm_ros2__msg__Link *)(untyped_value);
  *value = *item;
}

void sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sfm_ros2__msg__Link * item =
    ((sfm_ros2__msg__Link *)
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__links(untyped_member, index));
  const sfm_ros2__msg__Link * value =
    (const sfm_ros2__msg__Link *)(untyped_value);
  *item = *value;
}

bool sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__links(
  void * untyped_member, size_t size)
{
  sfm_ros2__msg__Link__Sequence * member =
    (sfm_ros2__msg__Link__Sequence *)(untyped_member);
  sfm_ros2__msg__Link__Sequence__fini(member);
  return sfm_ros2__msg__Link__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfm_ros2__msg__MapGraph, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_to_odom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfm_ros2__msg__MapGraph, map_to_odom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfm_ros2__msg__MapGraph, poses_id),  // bytes offset in struct
    NULL,  // default value
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__poses_id,  // size() function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses_id,  // get_const(index) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses_id,  // get(index) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__poses_id,  // fetch(index, &value) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__poses_id,  // assign(index, value) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__poses_id  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfm_ros2__msg__MapGraph, poses),  // bytes offset in struct
    NULL,  // default value
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__poses,  // size() function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__poses,  // get_const(index) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__poses,  // get(index) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__poses,  // fetch(index, &value) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__poses,  // assign(index, value) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__poses  // resize(index) function pointer
  },
  {
    "links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfm_ros2__msg__MapGraph, links),  // bytes offset in struct
    NULL,  // default value
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__size_function__MapGraph__links,  // size() function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_const_function__MapGraph__links,  // get_const(index) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__get_function__MapGraph__links,  // get(index) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__fetch_function__MapGraph__links,  // fetch(index, &value) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__assign_function__MapGraph__links,  // assign(index, value) function pointer
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__resize_function__MapGraph__links  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_members = {
  "sfm_ros2__msg",  // message namespace
  "MapGraph",  // message name
  5,  // number of fields
  sizeof(sfm_ros2__msg__MapGraph),
  false,  // has_any_key_member_
  sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array,  // message members
  sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle = {
  0,
  &sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_members,
  get_message_typesupport_handle_function,
  &sfm_ros2__msg__MapGraph__get_type_hash,
  &sfm_ros2__msg__MapGraph__get_type_description,
  &sfm_ros2__msg__MapGraph__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sfm_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfm_ros2, msg, MapGraph)() {
  sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfm_ros2, msg, Link)();
  if (!sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle.typesupport_identifier) {
    sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sfm_ros2__msg__MapGraph__rosidl_typesupport_introspection_c__MapGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
