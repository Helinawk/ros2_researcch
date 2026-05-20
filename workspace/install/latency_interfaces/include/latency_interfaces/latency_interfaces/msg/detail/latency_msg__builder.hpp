// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from latency_interfaces:msg/LatencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__BUILDER_HPP_
#define LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "latency_interfaces/msg/detail/latency_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace latency_interfaces
{

namespace msg
{

namespace builder
{

class Init_LatencyMsg_payload
{
public:
  explicit Init_LatencyMsg_payload(::latency_interfaces::msg::LatencyMsg & msg)
  : msg_(msg)
  {}
  ::latency_interfaces::msg::LatencyMsg payload(::latency_interfaces::msg::LatencyMsg::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::latency_interfaces::msg::LatencyMsg msg_;
};

class Init_LatencyMsg_timestamp
{
public:
  explicit Init_LatencyMsg_timestamp(::latency_interfaces::msg::LatencyMsg & msg)
  : msg_(msg)
  {}
  Init_LatencyMsg_payload timestamp(::latency_interfaces::msg::LatencyMsg::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LatencyMsg_payload(msg_);
  }

private:
  ::latency_interfaces::msg::LatencyMsg msg_;
};

class Init_LatencyMsg_message_id
{
public:
  Init_LatencyMsg_message_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LatencyMsg_timestamp message_id(::latency_interfaces::msg::LatencyMsg::_message_id_type arg)
  {
    msg_.message_id = std::move(arg);
    return Init_LatencyMsg_timestamp(msg_);
  }

private:
  ::latency_interfaces::msg::LatencyMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::latency_interfaces::msg::LatencyMsg>()
{
  return latency_interfaces::msg::builder::Init_LatencyMsg_message_id();
}

}  // namespace latency_interfaces

#endif  // LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__BUILDER_HPP_
