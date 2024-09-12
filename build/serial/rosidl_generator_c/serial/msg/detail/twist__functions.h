// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from serial:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef SERIAL__MSG__DETAIL__TWIST__FUNCTIONS_H_
#define SERIAL__MSG__DETAIL__TWIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "serial/msg/rosidl_generator_c__visibility_control.h"

#include "serial/msg/detail/twist__struct.h"

/// Initialize msg/Twist message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * serial__msg__Twist
 * )) before or use
 * serial__msg__Twist__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
bool
serial__msg__Twist__init(serial__msg__Twist * msg);

/// Finalize msg/Twist message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
void
serial__msg__Twist__fini(serial__msg__Twist * msg);

/// Create msg/Twist message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * serial__msg__Twist__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
serial__msg__Twist *
serial__msg__Twist__create();

/// Destroy msg/Twist message.
/**
 * It calls
 * serial__msg__Twist__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
void
serial__msg__Twist__destroy(serial__msg__Twist * msg);

/// Check for msg/Twist message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
bool
serial__msg__Twist__are_equal(const serial__msg__Twist * lhs, const serial__msg__Twist * rhs);

/// Copy a msg/Twist message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
bool
serial__msg__Twist__copy(
  const serial__msg__Twist * input,
  serial__msg__Twist * output);

/// Initialize array of msg/Twist messages.
/**
 * It allocates the memory for the number of elements and calls
 * serial__msg__Twist__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
bool
serial__msg__Twist__Sequence__init(serial__msg__Twist__Sequence * array, size_t size);

/// Finalize array of msg/Twist messages.
/**
 * It calls
 * serial__msg__Twist__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
void
serial__msg__Twist__Sequence__fini(serial__msg__Twist__Sequence * array);

/// Create array of msg/Twist messages.
/**
 * It allocates the memory for the array and calls
 * serial__msg__Twist__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
serial__msg__Twist__Sequence *
serial__msg__Twist__Sequence__create(size_t size);

/// Destroy array of msg/Twist messages.
/**
 * It calls
 * serial__msg__Twist__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
void
serial__msg__Twist__Sequence__destroy(serial__msg__Twist__Sequence * array);

/// Check for msg/Twist message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
bool
serial__msg__Twist__Sequence__are_equal(const serial__msg__Twist__Sequence * lhs, const serial__msg__Twist__Sequence * rhs);

/// Copy an array of msg/Twist messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_serial
bool
serial__msg__Twist__Sequence__copy(
  const serial__msg__Twist__Sequence * input,
  serial__msg__Twist__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SERIAL__MSG__DETAIL__TWIST__FUNCTIONS_H_
