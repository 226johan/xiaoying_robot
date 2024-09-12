// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from serial:msg/Twist.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "serial/msg/detail/twist__rosidl_typesupport_introspection_c.h"
#include "serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "serial/msg/detail/twist__functions.h"
#include "serial/msg/detail/twist__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  serial__msg__Twist__init(message_memory);
}

void serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_fini_function(void * message_memory)
{
  serial__msg__Twist__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(serial__msg__Twist, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_message_members = {
  "serial__msg",  // message namespace
  "Twist",  // message name
  1,  // number of fields
  sizeof(serial__msg__Twist),
  serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_message_member_array,  // message members
  serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_init_function,  // function to initialize message memory (memory has to be allocated)
  serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_message_type_support_handle = {
  0,
  &serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, serial, msg, Twist)() {
  if (!serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_message_type_support_handle.typesupport_identifier) {
    serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &serial__msg__Twist__rosidl_typesupport_introspection_c__Twist_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
