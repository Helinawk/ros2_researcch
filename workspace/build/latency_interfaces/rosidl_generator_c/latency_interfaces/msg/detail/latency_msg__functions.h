// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from latency_interfaces:msg/LatencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__FUNCTIONS_H_
#define LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "latency_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "latency_interfaces/msg/detail/latency_msg__struct.h"

/// Initialize msg/LatencyMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * latency_interfaces__msg__LatencyMsg
 * )) before or use
 * latency_interfaces__msg__LatencyMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
bool
latency_interfaces__msg__LatencyMsg__init(latency_interfaces__msg__LatencyMsg * msg);

/// Finalize msg/LatencyMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
void
latency_interfaces__msg__LatencyMsg__fini(latency_interfaces__msg__LatencyMsg * msg);

/// Create msg/LatencyMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * latency_interfaces__msg__LatencyMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
latency_interfaces__msg__LatencyMsg *
latency_interfaces__msg__LatencyMsg__create();

/// Destroy msg/LatencyMsg message.
/**
 * It calls
 * latency_interfaces__msg__LatencyMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
void
latency_interfaces__msg__LatencyMsg__destroy(latency_interfaces__msg__LatencyMsg * msg);

/// Check for msg/LatencyMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
bool
latency_interfaces__msg__LatencyMsg__are_equal(const latency_interfaces__msg__LatencyMsg * lhs, const latency_interfaces__msg__LatencyMsg * rhs);

/// Copy a msg/LatencyMsg message.
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
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
bool
latency_interfaces__msg__LatencyMsg__copy(
  const latency_interfaces__msg__LatencyMsg * input,
  latency_interfaces__msg__LatencyMsg * output);

/// Initialize array of msg/LatencyMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * latency_interfaces__msg__LatencyMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
bool
latency_interfaces__msg__LatencyMsg__Sequence__init(latency_interfaces__msg__LatencyMsg__Sequence * array, size_t size);

/// Finalize array of msg/LatencyMsg messages.
/**
 * It calls
 * latency_interfaces__msg__LatencyMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
void
latency_interfaces__msg__LatencyMsg__Sequence__fini(latency_interfaces__msg__LatencyMsg__Sequence * array);

/// Create array of msg/LatencyMsg messages.
/**
 * It allocates the memory for the array and calls
 * latency_interfaces__msg__LatencyMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
latency_interfaces__msg__LatencyMsg__Sequence *
latency_interfaces__msg__LatencyMsg__Sequence__create(size_t size);

/// Destroy array of msg/LatencyMsg messages.
/**
 * It calls
 * latency_interfaces__msg__LatencyMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
void
latency_interfaces__msg__LatencyMsg__Sequence__destroy(latency_interfaces__msg__LatencyMsg__Sequence * array);

/// Check for msg/LatencyMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
bool
latency_interfaces__msg__LatencyMsg__Sequence__are_equal(const latency_interfaces__msg__LatencyMsg__Sequence * lhs, const latency_interfaces__msg__LatencyMsg__Sequence * rhs);

/// Copy an array of msg/LatencyMsg messages.
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
ROSIDL_GENERATOR_C_PUBLIC_latency_interfaces
bool
latency_interfaces__msg__LatencyMsg__Sequence__copy(
  const latency_interfaces__msg__LatencyMsg__Sequence * input,
  latency_interfaces__msg__LatencyMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__FUNCTIONS_H_
