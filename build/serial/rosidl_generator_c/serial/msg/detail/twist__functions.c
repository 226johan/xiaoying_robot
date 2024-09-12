// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from serial:msg/Twist.idl
// generated code does not contain a copyright notice
#include "serial/msg/detail/twist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
serial__msg__Twist__init(serial__msg__Twist * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
serial__msg__Twist__fini(serial__msg__Twist * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
serial__msg__Twist__are_equal(const serial__msg__Twist * lhs, const serial__msg__Twist * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
serial__msg__Twist__copy(
  const serial__msg__Twist * input,
  serial__msg__Twist * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

serial__msg__Twist *
serial__msg__Twist__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial__msg__Twist * msg = (serial__msg__Twist *)allocator.allocate(sizeof(serial__msg__Twist), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(serial__msg__Twist));
  bool success = serial__msg__Twist__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
serial__msg__Twist__destroy(serial__msg__Twist * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    serial__msg__Twist__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
serial__msg__Twist__Sequence__init(serial__msg__Twist__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial__msg__Twist * data = NULL;

  if (size) {
    data = (serial__msg__Twist *)allocator.zero_allocate(size, sizeof(serial__msg__Twist), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = serial__msg__Twist__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        serial__msg__Twist__fini(&data[i - 1]);
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
serial__msg__Twist__Sequence__fini(serial__msg__Twist__Sequence * array)
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
      serial__msg__Twist__fini(&array->data[i]);
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

serial__msg__Twist__Sequence *
serial__msg__Twist__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial__msg__Twist__Sequence * array = (serial__msg__Twist__Sequence *)allocator.allocate(sizeof(serial__msg__Twist__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = serial__msg__Twist__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
serial__msg__Twist__Sequence__destroy(serial__msg__Twist__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    serial__msg__Twist__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
serial__msg__Twist__Sequence__are_equal(const serial__msg__Twist__Sequence * lhs, const serial__msg__Twist__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!serial__msg__Twist__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
serial__msg__Twist__Sequence__copy(
  const serial__msg__Twist__Sequence * input,
  serial__msg__Twist__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(serial__msg__Twist);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    serial__msg__Twist * data =
      (serial__msg__Twist *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!serial__msg__Twist__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          serial__msg__Twist__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!serial__msg__Twist__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
