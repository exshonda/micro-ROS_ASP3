// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_msgs:action/GripperCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"
#include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_msgs/action/detail/gripper_command__functions.h"
#include "control_msgs/action/detail/gripper_command__struct.h"


// Include directives for member types
// Member `command`
#include "control_msgs/msg/gripper_command.h"
// Member `command`
#include "control_msgs/msg/detail/gripper_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__GripperCommand_Goal__init(message_memory);
}

void GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_fini_function(void * message_memory)
{
  control_msgs__action__GripperCommand_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_Goal, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_message_members = {
  "control_msgs__action",  // message namespace
  "GripperCommand_Goal",  // message name
  1,  // number of fields
  sizeof(control_msgs__action__GripperCommand_Goal),
  GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_message_member_array,  // message members
  GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_message_type_support_handle = {
  0,
  &GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_Goal)() {
  GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, msg, GripperCommand)();
  if (!GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_message_type_support_handle.typesupport_identifier) {
    GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GripperCommand_Goal__rosidl_typesupport_introspection_c__GripperCommand_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__functions.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__GripperCommand_Result__init(message_memory);
}

void GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_fini_function(void * message_memory)
{
  control_msgs__action__GripperCommand_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_message_member_array[4] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_Result, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_Result, effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stalled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_Result, stalled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reached_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_Result, reached_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_message_members = {
  "control_msgs__action",  // message namespace
  "GripperCommand_Result",  // message name
  4,  // number of fields
  sizeof(control_msgs__action__GripperCommand_Result),
  GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_message_member_array,  // message members
  GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_message_type_support_handle = {
  0,
  &GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_Result)() {
  if (!GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_message_type_support_handle.typesupport_identifier) {
    GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GripperCommand_Result__rosidl_typesupport_introspection_c__GripperCommand_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__functions.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__GripperCommand_Feedback__init(message_memory);
}

void GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_fini_function(void * message_memory)
{
  control_msgs__action__GripperCommand_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_message_member_array[4] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_Feedback, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_Feedback, effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stalled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_Feedback, stalled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reached_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_Feedback, reached_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_message_members = {
  "control_msgs__action",  // message namespace
  "GripperCommand_Feedback",  // message name
  4,  // number of fields
  sizeof(control_msgs__action__GripperCommand_Feedback),
  GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_message_member_array,  // message members
  GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_message_type_support_handle = {
  0,
  &GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_Feedback)() {
  if (!GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_message_type_support_handle.typesupport_identifier) {
    GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GripperCommand_Feedback__rosidl_typesupport_introspection_c__GripperCommand_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__functions.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "control_msgs/action/gripper_command.h"
// Member `goal`
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__GripperCommand_SendGoal_Request__init(message_memory);
}

void GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_fini_function(void * message_memory)
{
  control_msgs__action__GripperCommand_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_members = {
  "control_msgs__action",  // message namespace
  "GripperCommand_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(control_msgs__action__GripperCommand_SendGoal_Request),
  GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_member_array,  // message members
  GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_type_support_handle = {
  0,
  &GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_SendGoal_Request)() {
  GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_Goal)();
  if (!GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GripperCommand_SendGoal_Request__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__functions.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__GripperCommand_SendGoal_Response__init(message_memory);
}

void GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_fini_function(void * message_memory)
{
  control_msgs__action__GripperCommand_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_message_members = {
  "control_msgs__action",  // message namespace
  "GripperCommand_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(control_msgs__action__GripperCommand_SendGoal_Response),
  GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_message_member_array,  // message members
  GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_message_type_support_handle = {
  0,
  &GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_SendGoal_Response)() {
  GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GripperCommand_SendGoal_Response__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_service_members = {
  "control_msgs__action",  // service namespace
  "GripperCommand_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_service_type_support_handle = {
  0,
  &control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_SendGoal)() {
  if (!control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_service_type_support_handle.typesupport_identifier) {
    control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_SendGoal_Response)()->data;
  }

  return &control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__functions.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__GripperCommand_GetResult_Request__init(message_memory);
}

void GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_fini_function(void * message_memory)
{
  control_msgs__action__GripperCommand_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_message_members = {
  "control_msgs__action",  // message namespace
  "GripperCommand_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(control_msgs__action__GripperCommand_GetResult_Request),
  GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_message_member_array,  // message members
  GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_message_type_support_handle = {
  0,
  &GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_GetResult_Request)() {
  GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GripperCommand_GetResult_Request__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__functions.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "control_msgs/action/gripper_command.h"
// Member `result`
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__GripperCommand_GetResult_Response__init(message_memory);
}

void GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_fini_function(void * message_memory)
{
  control_msgs__action__GripperCommand_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_message_members = {
  "control_msgs__action",  // message namespace
  "GripperCommand_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(control_msgs__action__GripperCommand_GetResult_Response),
  GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_message_member_array,  // message members
  GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_message_type_support_handle = {
  0,
  &GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_GetResult_Response)() {
  GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_Result)();
  if (!GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GripperCommand_GetResult_Response__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_GetResult_service_members = {
  "control_msgs__action",  // service namespace
  "GripperCommand_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_GetResult_service_type_support_handle = {
  0,
  &control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_GetResult)() {
  if (!control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_GetResult_service_type_support_handle.typesupport_identifier) {
    control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_GetResult_Response)()->data;
  }

  return &control_msgs__action__detail__gripper_command__rosidl_typesupport_introspection_c__GripperCommand_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__functions.h"
// already included above
// #include "control_msgs/action/detail/gripper_command__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "control_msgs/action/gripper_command.h"
// Member `feedback`
// already included above
// #include "control_msgs/action/detail/gripper_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_msgs__action__GripperCommand_FeedbackMessage__init(message_memory);
}

void GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_fini_function(void * message_memory)
{
  control_msgs__action__GripperCommand_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_msgs__action__GripperCommand_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_message_members = {
  "control_msgs__action",  // message namespace
  "GripperCommand_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(control_msgs__action__GripperCommand_FeedbackMessage),
  GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_message_member_array,  // message members
  GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_message_type_support_handle = {
  0,
  &GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_FeedbackMessage)() {
  GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_msgs, action, GripperCommand_Feedback)();
  if (!GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GripperCommand_FeedbackMessage__rosidl_typesupport_introspection_c__GripperCommand_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
