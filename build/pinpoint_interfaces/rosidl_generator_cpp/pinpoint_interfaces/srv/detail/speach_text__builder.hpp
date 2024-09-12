// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pinpoint_interfaces:srv/SpeachText.idl
// generated code does not contain a copyright notice

#ifndef PINPOINT_INTERFACES__SRV__DETAIL__SPEACH_TEXT__BUILDER_HPP_
#define PINPOINT_INTERFACES__SRV__DETAIL__SPEACH_TEXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pinpoint_interfaces/srv/detail/speach_text__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pinpoint_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpeachText_Request_text
{
public:
  Init_SpeachText_Request_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pinpoint_interfaces::srv::SpeachText_Request text(::pinpoint_interfaces::srv::SpeachText_Request::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pinpoint_interfaces::srv::SpeachText_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pinpoint_interfaces::srv::SpeachText_Request>()
{
  return pinpoint_interfaces::srv::builder::Init_SpeachText_Request_text();
}

}  // namespace pinpoint_interfaces


namespace pinpoint_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpeachText_Response_result
{
public:
  Init_SpeachText_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pinpoint_interfaces::srv::SpeachText_Response result(::pinpoint_interfaces::srv::SpeachText_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pinpoint_interfaces::srv::SpeachText_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pinpoint_interfaces::srv::SpeachText_Response>()
{
  return pinpoint_interfaces::srv::builder::Init_SpeachText_Response_result();
}

}  // namespace pinpoint_interfaces

#endif  // PINPOINT_INTERFACES__SRV__DETAIL__SPEACH_TEXT__BUILDER_HPP_
