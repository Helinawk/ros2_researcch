// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from latency_interfaces:msg/LatencyMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "latency_interfaces/msg/detail/latency_msg__rosidl_typesupport_introspection_c.h"
#include "latency_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "latency_interfaces/msg/detail/latency_msg__functions.h"
#include "latency_interfaces/msg/detail/latency_msg__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  latency_interfaces__msg__LatencyMsg__init(message_memory);
}

void latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_fini_function(void * message_memory)
{
  latency_interfaces__msg__LatencyMsg__fini(message_memory);
}

size_t latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__size_function__LatencyMsg__payload(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__get_const_function__LatencyMsg__payload(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__get_function__LatencyMsg__payload(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__fetch_function__LatencyMsg__payload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__get_const_function__LatencyMsg__payload(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__assign_function__LatencyMsg__payload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__get_function__LatencyMsg__payload(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__resize_function__LatencyMsg__payload(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_message_member_array[3] = {
  {
    "message_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(latency_interfaces__msg__LatencyMsg, message_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(latency_interfaces__msg__LatencyMsg, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(latency_interfaces__msg__LatencyMsg, payload),  // bytes offset in struct
    NULL,  // default value
    latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__size_function__LatencyMsg__payload,  // size() function pointer
    latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__get_const_function__LatencyMsg__payload,  // get_const(index) function pointer
    latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__get_function__LatencyMsg__payload,  // get(index) function pointer
    latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__fetch_function__LatencyMsg__payload,  // fetch(index, &value) function pointer
    latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__assign_function__LatencyMsg__payload,  // assign(index, value) function pointer
    latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__resize_function__LatencyMsg__payload  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_message_members = {
  "latency_interfaces__msg",  // message namespace
  "LatencyMsg",  // message name
  3,  // number of fields
  sizeof(latency_interfaces__msg__LatencyMsg),
  latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_message_member_array,  // message members
  latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_message_type_support_handle = {
  0,
  &latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_latency_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, latency_interfaces, msg, LatencyMsg)() {
  latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_message_type_support_handle.typesupport_identifier) {
    latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &latency_interfaces__msg__LatencyMsg__rosidl_typesupport_introspection_c__LatencyMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
