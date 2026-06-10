// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sfm_ros2:msg/Link.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sfm_ros2/msg/detail/link__rosidl_typesupport_introspection_c.h"
#include "sfm_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sfm_ros2/msg/detail/link__functions.h"
#include "sfm_ros2/msg/detail/link__struct.h"


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `transform`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sfm_ros2__msg__Link__init(message_memory);
}

void sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_fini_function(void * message_memory)
{
  sfm_ros2__msg__Link__fini(message_memory);
}

size_t sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__information(
  const void * untyped_member)
{
  (void)untyped_member;
  return 36;
}

const void * sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__information(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__information(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__information(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__information(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__information(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__information(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[5] = {
  {
    "from_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfm_ros2__msg__Link, from_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "to_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfm_ros2__msg__Link, to_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfm_ros2__msg__Link, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sfm_ros2__msg__Link, transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "information",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    36,  // array size
    false,  // is upper bound
    offsetof(sfm_ros2__msg__Link, information),  // bytes offset in struct
    NULL,  // default value
    sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__information,  // size() function pointer
    sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__information,  // get_const(index) function pointer
    sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__information,  // get(index) function pointer
    sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__information,  // fetch(index, &value) function pointer
    sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__information,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_message_members = {
  "sfm_ros2__msg",  // message namespace
  "Link",  // message name
  5,  // number of fields
  sizeof(sfm_ros2__msg__Link),
  false,  // has_any_key_member_
  sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array,  // message members
  sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_init_function,  // function to initialize message memory (memory has to be allocated)
  sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle = {
  0,
  &sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_message_members,
  get_message_typesupport_handle_function,
  &sfm_ros2__msg__Link__get_type_hash,
  &sfm_ros2__msg__Link__get_type_description,
  &sfm_ros2__msg__Link__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sfm_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sfm_ros2, msg, Link)() {
  sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier) {
    sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sfm_ros2__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
