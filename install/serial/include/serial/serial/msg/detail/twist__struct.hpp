// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serial:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef SERIAL__MSG__DETAIL__TWIST__STRUCT_HPP_
#define SERIAL__MSG__DETAIL__TWIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__serial__msg__Twist __attribute__((deprecated))
#else
# define DEPRECATED__serial__msg__Twist __declspec(deprecated)
#endif

namespace serial
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Twist_
{
  using Type = Twist_<ContainerAllocator>;

  explicit Twist_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Twist_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    serial::msg::Twist_<ContainerAllocator> *;
  using ConstRawPtr =
    const serial::msg::Twist_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serial::msg::Twist_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serial::msg::Twist_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serial::msg::Twist_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serial::msg::Twist_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serial::msg::Twist_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serial::msg::Twist_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serial::msg::Twist_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serial::msg::Twist_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serial__msg__Twist
    std::shared_ptr<serial::msg::Twist_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serial__msg__Twist
    std::shared_ptr<serial::msg::Twist_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Twist_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Twist_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Twist_

// alias to use template instance with default allocator
using Twist =
  serial::msg::Twist_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace serial

#endif  // SERIAL__MSG__DETAIL__TWIST__STRUCT_HPP_
