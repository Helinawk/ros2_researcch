// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from latency_interfaces:msg/LatencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__STRUCT_HPP_
#define LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__latency_interfaces__msg__LatencyMsg __attribute__((deprecated))
#else
# define DEPRECATED__latency_interfaces__msg__LatencyMsg __declspec(deprecated)
#endif

namespace latency_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LatencyMsg_
{
  using Type = LatencyMsg_<ContainerAllocator>;

  explicit LatencyMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = 0ull;
    }
  }

  explicit LatencyMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_id = 0ull;
    }
  }

  // field types and members
  using _message_id_type =
    uint64_t;
  _message_id_type message_id;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _payload_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _payload_type payload;

  // setters for named parameter idiom
  Type & set__message_id(
    const uint64_t & _arg)
  {
    this->message_id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__payload(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    latency_interfaces::msg::LatencyMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const latency_interfaces::msg::LatencyMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<latency_interfaces::msg::LatencyMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<latency_interfaces::msg::LatencyMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      latency_interfaces::msg::LatencyMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<latency_interfaces::msg::LatencyMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      latency_interfaces::msg::LatencyMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<latency_interfaces::msg::LatencyMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<latency_interfaces::msg::LatencyMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<latency_interfaces::msg::LatencyMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__latency_interfaces__msg__LatencyMsg
    std::shared_ptr<latency_interfaces::msg::LatencyMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__latency_interfaces__msg__LatencyMsg
    std::shared_ptr<latency_interfaces::msg::LatencyMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LatencyMsg_ & other) const
  {
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const LatencyMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LatencyMsg_

// alias to use template instance with default allocator
using LatencyMsg =
  latency_interfaces::msg::LatencyMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace latency_interfaces

#endif  // LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__STRUCT_HPP_
