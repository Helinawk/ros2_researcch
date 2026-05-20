// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from latency_interfaces:msg/LatencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__STRUCT_H_
#define LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LatencyMsg in the package latency_interfaces.
typedef struct latency_interfaces__msg__LatencyMsg
{
  uint64_t message_id;
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__uint8__Sequence payload;
} latency_interfaces__msg__LatencyMsg;

// Struct for a sequence of latency_interfaces__msg__LatencyMsg.
typedef struct latency_interfaces__msg__LatencyMsg__Sequence
{
  latency_interfaces__msg__LatencyMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} latency_interfaces__msg__LatencyMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__STRUCT_H_
