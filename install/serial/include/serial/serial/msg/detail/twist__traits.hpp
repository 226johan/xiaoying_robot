// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from serial:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef SERIAL__MSG__DETAIL__TWIST__TRAITS_HPP_
#define SERIAL__MSG__DETAIL__TWIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "serial/msg/detail/twist__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace serial
{

namespace msg
{

inline void to_flow_style_yaml(
  const Twist & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Twist & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Twist & msg, bool use_flow_style = false)
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

}  // namespace serial

namespace rosidl_generator_traits
{

[[deprecated("use serial::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const serial::msg::Twist & msg,
  std::ostream & out, size_t indentation = 0)
{
  serial::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serial::msg::to_yaml() instead")]]
inline std::string to_yaml(const serial::msg::Twist & msg)
{
  return serial::msg::to_yaml(msg);
}

template<>
inline const char * data_type<serial::msg::Twist>()
{
  return "serial::msg::Twist";
}

template<>
inline const char * name<serial::msg::Twist>()
{
  return "serial/msg/Twist";
}

template<>
struct has_fixed_size<serial::msg::Twist>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<serial::msg::Twist>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<serial::msg::Twist>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERIAL__MSG__DETAIL__TWIST__TRAITS_HPP_
