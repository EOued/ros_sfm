// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sfm_ros2:msg/MapGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sfm_ros2/msg/map_graph.h"


#ifndef SFM_ROS2__MSG__DETAIL__MAP_GRAPH__FUNCTIONS_H_
#define SFM_ROS2__MSG__DETAIL__MAP_GRAPH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "sfm_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "sfm_ros2/msg/detail/map_graph__struct.h"

/// Initialize msg/MapGraph message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sfm_ros2__msg__MapGraph
 * )) before or use
 * sfm_ros2__msg__MapGraph__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
bool
sfm_ros2__msg__MapGraph__init(sfm_ros2__msg__MapGraph * msg);

/// Finalize msg/MapGraph message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
void
sfm_ros2__msg__MapGraph__fini(sfm_ros2__msg__MapGraph * msg);

/// Create msg/MapGraph message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sfm_ros2__msg__MapGraph__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
sfm_ros2__msg__MapGraph *
sfm_ros2__msg__MapGraph__create(void);

/// Destroy msg/MapGraph message.
/**
 * It calls
 * sfm_ros2__msg__MapGraph__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
void
sfm_ros2__msg__MapGraph__destroy(sfm_ros2__msg__MapGraph * msg);

/// Check for msg/MapGraph message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
bool
sfm_ros2__msg__MapGraph__are_equal(const sfm_ros2__msg__MapGraph * lhs, const sfm_ros2__msg__MapGraph * rhs);

/// Copy a msg/MapGraph message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
bool
sfm_ros2__msg__MapGraph__copy(
  const sfm_ros2__msg__MapGraph * input,
  sfm_ros2__msg__MapGraph * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
const rosidl_type_hash_t *
sfm_ros2__msg__MapGraph__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
const rosidl_runtime_c__type_description__TypeDescription *
sfm_ros2__msg__MapGraph__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
const rosidl_runtime_c__type_description__TypeSource *
sfm_ros2__msg__MapGraph__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
sfm_ros2__msg__MapGraph__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/MapGraph messages.
/**
 * It allocates the memory for the number of elements and calls
 * sfm_ros2__msg__MapGraph__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
bool
sfm_ros2__msg__MapGraph__Sequence__init(sfm_ros2__msg__MapGraph__Sequence * array, size_t size);

/// Finalize array of msg/MapGraph messages.
/**
 * It calls
 * sfm_ros2__msg__MapGraph__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
void
sfm_ros2__msg__MapGraph__Sequence__fini(sfm_ros2__msg__MapGraph__Sequence * array);

/// Create array of msg/MapGraph messages.
/**
 * It allocates the memory for the array and calls
 * sfm_ros2__msg__MapGraph__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
sfm_ros2__msg__MapGraph__Sequence *
sfm_ros2__msg__MapGraph__Sequence__create(size_t size);

/// Destroy array of msg/MapGraph messages.
/**
 * It calls
 * sfm_ros2__msg__MapGraph__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
void
sfm_ros2__msg__MapGraph__Sequence__destroy(sfm_ros2__msg__MapGraph__Sequence * array);

/// Check for msg/MapGraph message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
bool
sfm_ros2__msg__MapGraph__Sequence__are_equal(const sfm_ros2__msg__MapGraph__Sequence * lhs, const sfm_ros2__msg__MapGraph__Sequence * rhs);

/// Copy an array of msg/MapGraph messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sfm_ros2
bool
sfm_ros2__msg__MapGraph__Sequence__copy(
  const sfm_ros2__msg__MapGraph__Sequence * input,
  sfm_ros2__msg__MapGraph__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SFM_ROS2__MSG__DETAIL__MAP_GRAPH__FUNCTIONS_H_
