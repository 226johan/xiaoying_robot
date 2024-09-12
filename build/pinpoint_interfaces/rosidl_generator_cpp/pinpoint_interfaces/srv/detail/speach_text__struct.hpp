// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pinpoint_interfaces:srv/SpeachText.idl
// generated code does not contain a copyright notice

#ifndef PINPOINT_INTERFACES__SRV__DETAIL__SPEACH_TEXT__STRUCT_HPP_
#define PINPOINT_INTERFACES__SRV__DETAIL__SPEACH_TEXT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pinpoint_interfaces__srv__SpeachText_Request __attribute__((deprecated))
#else
# define DEPRECATED__pinpoint_interfaces__srv__SpeachText_Request __declspec(deprecated)
#endif

namespace pinpoint_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpeachText_Request_
{
  using Type = SpeachText_Request_<ContainerAllocator>;

  explicit SpeachText_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  explicit SpeachText_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  // field types and members
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pinpoint_interfaces__srv__SpeachText_Request
    std::shared_ptr<pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pinpoint_interfaces__srv__SpeachText_Request
    std::shared_ptr<pinpoint_interfaces::srv::SpeachText_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeachText_Request_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeachText_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeachText_Request_

// alias to use template instance with default allocator
using SpeachText_Request =
  pinpoint_interfaces::srv::SpeachText_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pinpoint_interfaces


#ifndef _WIN32
# define DEPRECATED__pinpoint_interfaces__srv__SpeachText_Response __attribute__((deprecated))
#else
# define DEPRECATED__pinpoint_interfaces__srv__SpeachText_Response __declspec(deprecated)
#endif

namespace pinpoint_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpeachText_Response_
{
  using Type = SpeachText_Response_<ContainerAllocator>;

  explicit SpeachText_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit SpeachText_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pinpoint_interfaces__srv__SpeachText_Response
    std::shared_ptr<pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pinpoint_interfaces__srv__SpeachText_Response
    std::shared_ptr<pinpoint_interfaces::srv::SpeachText_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeachText_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeachText_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeachText_Response_

// alias to use template instance with default allocator
using SpeachText_Response =
  pinpoint_interfaces::srv::SpeachText_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pinpoint_interfaces

namespace pinpoint_interfaces
{

namespace srv
{

struct SpeachText
{
  using Request = pinpoint_interfaces::srv::SpeachText_Request;
  using Response = pinpoint_interfaces::srv::SpeachText_Response;
};

}  // namespace srv

}  // namespace pinpoint_interfaces

#endif  // PINPOINT_INTERFACES__SRV__DETAIL__SPEACH_TEXT__STRUCT_HPP_
