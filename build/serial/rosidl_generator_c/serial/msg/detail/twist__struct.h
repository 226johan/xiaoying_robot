// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from serial:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef SERIAL__MSG__DETAIL__TWIST__STRUCT_H_
#define SERIAL__MSG__DETAIL__TWIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Twist in the package serial.
typedef struct serial__msg__Twist
{
  uint8_t structure_needs_at_least_one_member;
} serial__msg__Twist;

// Struct for a sequence of serial__msg__Twist.
typedef struct serial__msg__Twist__Sequence
{
  serial__msg__Twist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serial__msg__Twist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERIAL__MSG__DETAIL__TWIST__STRUCT_H_
