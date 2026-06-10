// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sfm_ros2:msg/MapGraph.idl
// generated code does not contain a copyright notice
#include "sfm_ros2/msg/detail/map_graph__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sfm_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sfm_ros2/msg/detail/map_graph__struct.h"
#include "sfm_ros2/msg/detail/map_graph__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // poses
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"  // map_to_odom
#include "rosidl_runtime_c/primitives_sequence.h"  // poses_id
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // poses_id
#include "sfm_ros2/msg/detail/link__functions.h"  // links
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();

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

bool cdr_serialize_sfm_ros2__msg__Link(
  const sfm_ros2__msg__Link * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_sfm_ros2__msg__Link(
  eprosima::fastcdr::Cdr & cdr,
  sfm_ros2__msg__Link * ros_message);

size_t get_serialized_size_sfm_ros2__msg__Link(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_sfm_ros2__msg__Link(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_sfm_ros2__msg__Link(
  const sfm_ros2__msg__Link * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_sfm_ros2__msg__Link(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_sfm_ros2__msg__Link(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sfm_ros2, msg, Link)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sfm_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MapGraph__ros_msg_type = sfm_ros2__msg__MapGraph;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
bool cdr_serialize_sfm_ros2__msg__MapGraph(
  const sfm_ros2__msg__MapGraph * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: map_to_odom
  {
    cdr_serialize_geometry_msgs__msg__TransformStamped(
      &ros_message->map_to_odom, cdr);
  }

  // Field name: poses_id
  {
    size_t size = ros_message->poses_id.size;
    auto array_ptr = ros_message->poses_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: poses
  {
    size_t size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Pose(
        &array_ptr[i], cdr);
    }
  }

  // Field name: links
  {
    size_t size = ros_message->links.size;
    auto array_ptr = ros_message->links.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_sfm_ros2__msg__Link(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
bool cdr_deserialize_sfm_ros2__msg__MapGraph(
  eprosima::fastcdr::Cdr & cdr,
  sfm_ros2__msg__MapGraph * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: map_to_odom
  {
    cdr_deserialize_geometry_msgs__msg__TransformStamped(cdr, &ros_message->map_to_odom);
  }

  // Field name: poses_id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->poses_id.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->poses_id);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->poses_id, size)) {
      fprintf(stderr, "failed to create array for field 'poses_id'");
      return false;
    }
    auto array_ptr = ros_message->poses_id.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: poses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->poses.data) {
      geometry_msgs__msg__Pose__Sequence__fini(&ros_message->poses);
    }
    if (!geometry_msgs__msg__Pose__Sequence__init(&ros_message->poses, size)) {
      fprintf(stderr, "failed to create array for field 'poses'");
      return false;
    }
    auto array_ptr = ros_message->poses.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Pose(cdr, &array_ptr[i]);
    }
  }

  // Field name: links
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->links.data) {
      sfm_ros2__msg__Link__Sequence__fini(&ros_message->links);
    }
    if (!sfm_ros2__msg__Link__Sequence__init(&ros_message->links, size)) {
      fprintf(stderr, "failed to create array for field 'links'");
      return false;
    }
    auto array_ptr = ros_message->links.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_sfm_ros2__msg__Link(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
size_t get_serialized_size_sfm_ros2__msg__MapGraph(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapGraph__ros_msg_type * ros_message = static_cast<const _MapGraph__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: map_to_odom
  current_alignment += get_serialized_size_geometry_msgs__msg__TransformStamped(
    &(ros_message->map_to_odom), current_alignment);

  // Field name: poses_id
  {
    size_t array_size = ros_message->poses_id.size;
    auto array_ptr = ros_message->poses_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: poses
  {
    size_t array_size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: links
  {
    size_t array_size = ros_message->links.size;
    auto array_ptr = ros_message->links.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sfm_ros2__msg__Link(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
size_t max_serialized_size_sfm_ros2__msg__MapGraph(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: map_to_odom
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

  // Field name: poses_id
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: links
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sfm_ros2__msg__Link(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sfm_ros2__msg__MapGraph;
    is_plain =
      (
      offsetof(DataType, links) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
bool cdr_serialize_key_sfm_ros2__msg__MapGraph(
  const sfm_ros2__msg__MapGraph * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: map_to_odom
  {
    cdr_serialize_key_geometry_msgs__msg__TransformStamped(
      &ros_message->map_to_odom, cdr);
  }

  // Field name: poses_id
  {
    size_t size = ros_message->poses_id.size;
    auto array_ptr = ros_message->poses_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: poses
  {
    size_t size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Pose(
        &array_ptr[i], cdr);
    }
  }

  // Field name: links
  {
    size_t size = ros_message->links.size;
    auto array_ptr = ros_message->links.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_sfm_ros2__msg__Link(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
size_t get_serialized_size_key_sfm_ros2__msg__MapGraph(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapGraph__ros_msg_type * ros_message = static_cast<const _MapGraph__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: map_to_odom
  current_alignment += get_serialized_size_key_geometry_msgs__msg__TransformStamped(
    &(ros_message->map_to_odom), current_alignment);

  // Field name: poses_id
  {
    size_t array_size = ros_message->poses_id.size;
    auto array_ptr = ros_message->poses_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: poses
  {
    size_t array_size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: links
  {
    size_t array_size = ros_message->links.size;
    auto array_ptr = ros_message->links.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_sfm_ros2__msg__Link(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sfm_ros2
size_t max_serialized_size_key_sfm_ros2__msg__MapGraph(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: map_to_odom
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

  // Field name: poses_id
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: poses
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: links
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_sfm_ros2__msg__Link(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sfm_ros2__msg__MapGraph;
    is_plain =
      (
      offsetof(DataType, links) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MapGraph__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const sfm_ros2__msg__MapGraph * ros_message = static_cast<const sfm_ros2__msg__MapGraph *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_sfm_ros2__msg__MapGraph(ros_message, cdr);
}

static bool _MapGraph__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  sfm_ros2__msg__MapGraph * ros_message = static_cast<sfm_ros2__msg__MapGraph *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_sfm_ros2__msg__MapGraph(cdr, ros_message);
}

static uint32_t _MapGraph__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sfm_ros2__msg__MapGraph(
      untyped_ros_message, 0));
}

static size_t _MapGraph__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sfm_ros2__msg__MapGraph(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MapGraph = {
  "sfm_ros2::msg",
  "MapGraph",
  _MapGraph__cdr_serialize,
  _MapGraph__cdr_deserialize,
  _MapGraph__get_serialized_size,
  _MapGraph__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MapGraph__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapGraph,
  get_message_typesupport_handle_function,
  &sfm_ros2__msg__MapGraph__get_type_hash,
  &sfm_ros2__msg__MapGraph__get_type_description,
  &sfm_ros2__msg__MapGraph__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sfm_ros2, msg, MapGraph)() {
  return &_MapGraph__type_support;
}

#if defined(__cplusplus)
}
#endif
