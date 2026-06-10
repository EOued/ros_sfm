// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sfm_ros2:msg/Link.idl
// generated code does not contain a copyright notice
#include "sfm_ros2/msg/detail/link__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sfm_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sfm_ros2/msg/detail/link__struct.h"
#include "sfm_ros2/msg/detail/link__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/transform_stamped__functions.h"  // transform

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
bool cdr_serialize_geometry_msgs__msg__TransformStamped(
  const geometry_msgs__msg__TransformStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
bool cdr_deserialize_geometry_msgs__msg__TransformStamped(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__TransformStamped * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t get_serialized_size_geometry_msgs__msg__TransformStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t max_serialized_size_geometry_msgs__msg__TransformStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
bool cdr_serialize_key_geometry_msgs__msg__TransformStamped(
  const geometry_msgs__msg__TransformStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t get_serialized_size_key_geometry_msgs__msg__TransformStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t max_serialized_size_key_geometry_msgs__msg__TransformStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TransformStamped)();


using _Link__ros_msg_type = sfm_ros2__msg__Link;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
bool cdr_serialize_sfm_ros2__msg__Link(
  const sfm_ros2__msg__Link * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: from_id
  {
    cdr << ros_message->from_id;
  }

  // Field name: to_id
  {
    cdr << ros_message->to_id;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: transform
  {
    cdr_serialize_geometry_msgs__msg__TransformStamped(
      &ros_message->transform, cdr);
  }

  // Field name: information
  {
    size_t size = 36;
    auto array_ptr = ros_message->information;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
bool cdr_deserialize_sfm_ros2__msg__Link(
  eprosima::fastcdr::Cdr & cdr,
  sfm_ros2__msg__Link * ros_message)
{
  // Field name: from_id
  {
    cdr >> ros_message->from_id;
  }

  // Field name: to_id
  {
    cdr >> ros_message->to_id;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: transform
  {
    cdr_deserialize_geometry_msgs__msg__TransformStamped(cdr, &ros_message->transform);
  }

  // Field name: information
  {
    size_t size = 36;
    auto array_ptr = ros_message->information;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
size_t get_serialized_size_sfm_ros2__msg__Link(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Link__ros_msg_type * ros_message = static_cast<const _Link__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: from_id
  {
    size_t item_size = sizeof(ros_message->from_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: to_id
  {
    size_t item_size = sizeof(ros_message->to_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: transform
  current_alignment += get_serialized_size_geometry_msgs__msg__TransformStamped(
    &(ros_message->transform), current_alignment);

  // Field name: information
  {
    size_t array_size = 36;
    auto array_ptr = ros_message->information;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
size_t max_serialized_size_sfm_ros2__msg__Link(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: from_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: to_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: transform
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__TransformStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: information
  {
    size_t array_size = 36;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sfm_ros2__msg__Link;
    is_plain =
      (
      offsetof(DataType, information) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
bool cdr_serialize_key_sfm_ros2__msg__Link(
  const sfm_ros2__msg__Link * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: from_id
  {
    cdr << ros_message->from_id;
  }

  // Field name: to_id
  {
    cdr << ros_message->to_id;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: transform
  {
    cdr_serialize_key_geometry_msgs__msg__TransformStamped(
      &ros_message->transform, cdr);
  }

  // Field name: information
  {
    size_t size = 36;
    auto array_ptr = ros_message->information;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
size_t get_serialized_size_key_sfm_ros2__msg__Link(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Link__ros_msg_type * ros_message = static_cast<const _Link__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: from_id
  {
    size_t item_size = sizeof(ros_message->from_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: to_id
  {
    size_t item_size = sizeof(ros_message->to_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: transform
  current_alignment += get_serialized_size_key_geometry_msgs__msg__TransformStamped(
    &(ros_message->transform), current_alignment);

  // Field name: information
  {
    size_t array_size = 36;
    auto array_ptr = ros_message->information;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
size_t max_serialized_size_key_sfm_ros2__msg__Link(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: from_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: to_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: transform
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__TransformStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: information
  {
    size_t array_size = 36;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sfm_ros2__msg__Link;
    is_plain =
      (
      offsetof(DataType, information) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Link__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const sfm_ros2__msg__Link * ros_message = static_cast<const sfm_ros2__msg__Link *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_sfm_ros2__msg__Link(ros_message, cdr);
}

static bool _Link__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  sfm_ros2__msg__Link * ros_message = static_cast<sfm_ros2__msg__Link *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_sfm_ros2__msg__Link(cdr, ros_message);
}

static uint32_t _Link__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sfm_ros2__msg__Link(
      untyped_ros_message, 0));
}

static size_t _Link__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sfm_ros2__msg__Link(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Link = {
  "sfm_ros2::msg",
  "Link",
  _Link__cdr_serialize,
  _Link__cdr_deserialize,
  _Link__get_serialized_size,
  _Link__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Link__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Link,
  get_message_typesupport_handle_function,
  &sfm_ros2__msg__Link__get_type_hash,
  &sfm_ros2__msg__Link__get_type_description,
  &sfm_ros2__msg__Link__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sfm_ros2, msg, Link)() {
  return &_Link__type_support;
}

#if defined(__cplusplus)
}
#endif
