// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sfm_ros2:msg/MapGraph.idl
// generated code does not contain a copyright notice
#include "sfm_ros2/msg/detail/map_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `map_to_odom`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// Member `poses_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `links`
#include "sfm_ros2/msg/detail/link__functions.h"

bool
sfm_ros2__msg__MapGraph__init(sfm_ros2__msg__MapGraph * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sfm_ros2__msg__MapGraph__fini(msg);
    return false;
  }
  // map_to_odom
  if (!geometry_msgs__msg__TransformStamped__init(&msg->map_to_odom)) {
    sfm_ros2__msg__MapGraph__fini(msg);
    return false;
  }
  // poses_id
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->poses_id, 0)) {
    sfm_ros2__msg__MapGraph__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->poses, 0)) {
    sfm_ros2__msg__MapGraph__fini(msg);
    return false;
  }
  // links
  if (!sfm_ros2__msg__Link__Sequence__init(&msg->links, 0)) {
    sfm_ros2__msg__MapGraph__fini(msg);
    return false;
  }
  return true;
}

void
sfm_ros2__msg__MapGraph__fini(sfm_ros2__msg__MapGraph * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // map_to_odom
  geometry_msgs__msg__TransformStamped__fini(&msg->map_to_odom);
  // poses_id
  rosidl_runtime_c__int32__Sequence__fini(&msg->poses_id);
  // poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->poses);
  // links
  sfm_ros2__msg__Link__Sequence__fini(&msg->links);
}

bool
sfm_ros2__msg__MapGraph__are_equal(const sfm_ros2__msg__MapGraph * lhs, const sfm_ros2__msg__MapGraph * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // map_to_odom
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->map_to_odom), &(rhs->map_to_odom)))
  {
    return false;
  }
  // poses_id
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->poses_id), &(rhs->poses_id)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  // links
  if (!sfm_ros2__msg__Link__Sequence__are_equal(
      &(lhs->links), &(rhs->links)))
  {
    return false;
  }
  return true;
}

bool
sfm_ros2__msg__MapGraph__copy(
  const sfm_ros2__msg__MapGraph * input,
  sfm_ros2__msg__MapGraph * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // map_to_odom
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->map_to_odom), &(output->map_to_odom)))
  {
    return false;
  }
  // poses_id
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->poses_id), &(output->poses_id)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  // links
  if (!sfm_ros2__msg__Link__Sequence__copy(
      &(input->links), &(output->links)))
  {
    return false;
  }
  return true;
}

sfm_ros2__msg__MapGraph *
sfm_ros2__msg__MapGraph__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfm_ros2__msg__MapGraph * msg = (sfm_ros2__msg__MapGraph *)allocator.allocate(sizeof(sfm_ros2__msg__MapGraph), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sfm_ros2__msg__MapGraph));
  bool success = sfm_ros2__msg__MapGraph__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sfm_ros2__msg__MapGraph__destroy(sfm_ros2__msg__MapGraph * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sfm_ros2__msg__MapGraph__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sfm_ros2__msg__MapGraph__Sequence__init(sfm_ros2__msg__MapGraph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfm_ros2__msg__MapGraph * data = NULL;

  if (size) {
    data = (sfm_ros2__msg__MapGraph *)allocator.zero_allocate(size, sizeof(sfm_ros2__msg__MapGraph), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sfm_ros2__msg__MapGraph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sfm_ros2__msg__MapGraph__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sfm_ros2__msg__MapGraph__Sequence__fini(sfm_ros2__msg__MapGraph__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sfm_ros2__msg__MapGraph__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sfm_ros2__msg__MapGraph__Sequence *
sfm_ros2__msg__MapGraph__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sfm_ros2__msg__MapGraph__Sequence * array = (sfm_ros2__msg__MapGraph__Sequence *)allocator.allocate(sizeof(sfm_ros2__msg__MapGraph__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sfm_ros2__msg__MapGraph__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sfm_ros2__msg__MapGraph__Sequence__destroy(sfm_ros2__msg__MapGraph__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sfm_ros2__msg__MapGraph__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sfm_ros2__msg__MapGraph__Sequence__are_equal(const sfm_ros2__msg__MapGraph__Sequence * lhs, const sfm_ros2__msg__MapGraph__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sfm_ros2__msg__MapGraph__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sfm_ros2__msg__MapGraph__Sequence__copy(
  const sfm_ros2__msg__MapGraph__Sequence * input,
  sfm_ros2__msg__MapGraph__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sfm_ros2__msg__MapGraph);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sfm_ros2__msg__MapGraph * data =
      (sfm_ros2__msg__MapGraph *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sfm_ros2__msg__MapGraph__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sfm_ros2__msg__MapGraph__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sfm_ros2__msg__MapGraph__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
