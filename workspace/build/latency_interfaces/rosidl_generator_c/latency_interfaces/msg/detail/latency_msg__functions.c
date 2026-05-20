// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from latency_interfaces:msg/LatencyMsg.idl
// generated code does not contain a copyright notice
#include "latency_interfaces/msg/detail/latency_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
latency_interfaces__msg__LatencyMsg__init(latency_interfaces__msg__LatencyMsg * msg)
{
  if (!msg) {
    return false;
  }
  // message_id
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    latency_interfaces__msg__LatencyMsg__fini(msg);
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->payload, 0)) {
    latency_interfaces__msg__LatencyMsg__fini(msg);
    return false;
  }
  return true;
}

void
latency_interfaces__msg__LatencyMsg__fini(latency_interfaces__msg__LatencyMsg * msg)
{
  if (!msg) {
    return;
  }
  // message_id
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // payload
  rosidl_runtime_c__uint8__Sequence__fini(&msg->payload);
}

bool
latency_interfaces__msg__LatencyMsg__are_equal(const latency_interfaces__msg__LatencyMsg * lhs, const latency_interfaces__msg__LatencyMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message_id
  if (lhs->message_id != rhs->message_id) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  return true;
}

bool
latency_interfaces__msg__LatencyMsg__copy(
  const latency_interfaces__msg__LatencyMsg * input,
  latency_interfaces__msg__LatencyMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // message_id
  output->message_id = input->message_id;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  return true;
}

latency_interfaces__msg__LatencyMsg *
latency_interfaces__msg__LatencyMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  latency_interfaces__msg__LatencyMsg * msg = (latency_interfaces__msg__LatencyMsg *)allocator.allocate(sizeof(latency_interfaces__msg__LatencyMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(latency_interfaces__msg__LatencyMsg));
  bool success = latency_interfaces__msg__LatencyMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
latency_interfaces__msg__LatencyMsg__destroy(latency_interfaces__msg__LatencyMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    latency_interfaces__msg__LatencyMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
latency_interfaces__msg__LatencyMsg__Sequence__init(latency_interfaces__msg__LatencyMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  latency_interfaces__msg__LatencyMsg * data = NULL;

  if (size) {
    data = (latency_interfaces__msg__LatencyMsg *)allocator.zero_allocate(size, sizeof(latency_interfaces__msg__LatencyMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = latency_interfaces__msg__LatencyMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        latency_interfaces__msg__LatencyMsg__fini(&data[i - 1]);
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
latency_interfaces__msg__LatencyMsg__Sequence__fini(latency_interfaces__msg__LatencyMsg__Sequence * array)
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
      latency_interfaces__msg__LatencyMsg__fini(&array->data[i]);
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

latency_interfaces__msg__LatencyMsg__Sequence *
latency_interfaces__msg__LatencyMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  latency_interfaces__msg__LatencyMsg__Sequence * array = (latency_interfaces__msg__LatencyMsg__Sequence *)allocator.allocate(sizeof(latency_interfaces__msg__LatencyMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = latency_interfaces__msg__LatencyMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
latency_interfaces__msg__LatencyMsg__Sequence__destroy(latency_interfaces__msg__LatencyMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    latency_interfaces__msg__LatencyMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
latency_interfaces__msg__LatencyMsg__Sequence__are_equal(const latency_interfaces__msg__LatencyMsg__Sequence * lhs, const latency_interfaces__msg__LatencyMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!latency_interfaces__msg__LatencyMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
latency_interfaces__msg__LatencyMsg__Sequence__copy(
  const latency_interfaces__msg__LatencyMsg__Sequence * input,
  latency_interfaces__msg__LatencyMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(latency_interfaces__msg__LatencyMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    latency_interfaces__msg__LatencyMsg * data =
      (latency_interfaces__msg__LatencyMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!latency_interfaces__msg__LatencyMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          latency_interfaces__msg__LatencyMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!latency_interfaces__msg__LatencyMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
