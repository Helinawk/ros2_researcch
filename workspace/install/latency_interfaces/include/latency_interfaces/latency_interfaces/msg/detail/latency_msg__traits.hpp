// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from latency_interfaces:msg/LatencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__TRAITS_HPP_
#define LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "latency_interfaces/msg/detail/latency_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace latency_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LatencyMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: message_id
  {
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: payload
  {
    if (msg.payload.size() == 0) {
      out << "payload: []";
    } else {
      out << "payload: [";
      size_t pending_items = msg.payload.size();
      for (auto item : msg.payload) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LatencyMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_id: ";
    rosidl_generator_traits::value_to_yaml(msg.message_id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payload.size() == 0) {
      out << "payload: []\n";
    } else {
      out << "payload:\n";
      for (auto item : msg.payload) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LatencyMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace latency_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use latency_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const latency_interfaces::msg::LatencyMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  latency_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use latency_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const latency_interfaces::msg::LatencyMsg & msg)
{
  return latency_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<latency_interfaces::msg::LatencyMsg>()
{
  return "latency_interfaces::msg::LatencyMsg";
}

template<>
inline const char * name<latency_interfaces::msg::LatencyMsg>()
{
  return "latency_interfaces/msg/LatencyMsg";
}

template<>
struct has_fixed_size<latency_interfaces::msg::LatencyMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<latency_interfaces::msg::LatencyMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<latency_interfaces::msg::LatencyMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LATENCY_INTERFACES__MSG__DETAIL__LATENCY_MSG__TRAITS_HPP_
