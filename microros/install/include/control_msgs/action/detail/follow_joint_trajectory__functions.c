// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:action/FollowJointTrajectory.idl
// generated code does not contain a copyright notice
#include "control_msgs/action/detail/follow_joint_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
// Member `multi_dof_trajectory`
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory__functions.h"
// Member `path_tolerance`
// Member `goal_tolerance`
#include "control_msgs/msg/detail/joint_tolerance__functions.h"
// Member `component_path_tolerance`
// Member `component_goal_tolerance`
#include "control_msgs/msg/detail/joint_component_tolerance__functions.h"
// Member `goal_time_tolerance`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
control_msgs__action__FollowJointTrajectory_Goal__init(control_msgs__action__FollowJointTrajectory_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->trajectory)) {
    control_msgs__action__FollowJointTrajectory_Goal__fini(msg);
    return false;
  }
  // multi_dof_trajectory
  if (!trajectory_msgs__msg__MultiDOFJointTrajectory__init(&msg->multi_dof_trajectory)) {
    control_msgs__action__FollowJointTrajectory_Goal__fini(msg);
    return false;
  }
  // path_tolerance
  if (!control_msgs__msg__JointTolerance__Sequence__init(&msg->path_tolerance, 0)) {
    control_msgs__action__FollowJointTrajectory_Goal__fini(msg);
    return false;
  }
  // component_path_tolerance
  if (!control_msgs__msg__JointComponentTolerance__Sequence__init(&msg->component_path_tolerance, 0)) {
    control_msgs__action__FollowJointTrajectory_Goal__fini(msg);
    return false;
  }
  // goal_tolerance
  if (!control_msgs__msg__JointTolerance__Sequence__init(&msg->goal_tolerance, 0)) {
    control_msgs__action__FollowJointTrajectory_Goal__fini(msg);
    return false;
  }
  // component_goal_tolerance
  if (!control_msgs__msg__JointComponentTolerance__Sequence__init(&msg->component_goal_tolerance, 0)) {
    control_msgs__action__FollowJointTrajectory_Goal__fini(msg);
    return false;
  }
  // goal_time_tolerance
  if (!builtin_interfaces__msg__Duration__init(&msg->goal_time_tolerance)) {
    control_msgs__action__FollowJointTrajectory_Goal__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__FollowJointTrajectory_Goal__fini(control_msgs__action__FollowJointTrajectory_Goal * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->trajectory);
  // multi_dof_trajectory
  trajectory_msgs__msg__MultiDOFJointTrajectory__fini(&msg->multi_dof_trajectory);
  // path_tolerance
  control_msgs__msg__JointTolerance__Sequence__fini(&msg->path_tolerance);
  // component_path_tolerance
  control_msgs__msg__JointComponentTolerance__Sequence__fini(&msg->component_path_tolerance);
  // goal_tolerance
  control_msgs__msg__JointTolerance__Sequence__fini(&msg->goal_tolerance);
  // component_goal_tolerance
  control_msgs__msg__JointComponentTolerance__Sequence__fini(&msg->component_goal_tolerance);
  // goal_time_tolerance
  builtin_interfaces__msg__Duration__fini(&msg->goal_time_tolerance);
}

control_msgs__action__FollowJointTrajectory_Goal *
control_msgs__action__FollowJointTrajectory_Goal__create()
{
  control_msgs__action__FollowJointTrajectory_Goal * msg = (control_msgs__action__FollowJointTrajectory_Goal *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__FollowJointTrajectory_Goal));
  bool success = control_msgs__action__FollowJointTrajectory_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__FollowJointTrajectory_Goal__destroy(control_msgs__action__FollowJointTrajectory_Goal * msg)
{
  if (msg) {
    control_msgs__action__FollowJointTrajectory_Goal__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__FollowJointTrajectory_Goal__Sequence__init(control_msgs__action__FollowJointTrajectory_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__FollowJointTrajectory_Goal * data = NULL;
  if (size) {
    data = (control_msgs__action__FollowJointTrajectory_Goal *)calloc(size, sizeof(control_msgs__action__FollowJointTrajectory_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__FollowJointTrajectory_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__FollowJointTrajectory_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__FollowJointTrajectory_Goal__Sequence__fini(control_msgs__action__FollowJointTrajectory_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__FollowJointTrajectory_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__FollowJointTrajectory_Goal__Sequence *
control_msgs__action__FollowJointTrajectory_Goal__Sequence__create(size_t size)
{
  control_msgs__action__FollowJointTrajectory_Goal__Sequence * array = (control_msgs__action__FollowJointTrajectory_Goal__Sequence *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__FollowJointTrajectory_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__FollowJointTrajectory_Goal__Sequence__destroy(control_msgs__action__FollowJointTrajectory_Goal__Sequence * array)
{
  if (array) {
    control_msgs__action__FollowJointTrajectory_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error_string`
#include "rosidl_runtime_c/string_functions.h"

bool
control_msgs__action__FollowJointTrajectory_Result__init(control_msgs__action__FollowJointTrajectory_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  // error_string
  if (!rosidl_runtime_c__String__init(&msg->error_string)) {
    control_msgs__action__FollowJointTrajectory_Result__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__FollowJointTrajectory_Result__fini(control_msgs__action__FollowJointTrajectory_Result * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  // error_string
  rosidl_runtime_c__String__fini(&msg->error_string);
}

control_msgs__action__FollowJointTrajectory_Result *
control_msgs__action__FollowJointTrajectory_Result__create()
{
  control_msgs__action__FollowJointTrajectory_Result * msg = (control_msgs__action__FollowJointTrajectory_Result *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__FollowJointTrajectory_Result));
  bool success = control_msgs__action__FollowJointTrajectory_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__FollowJointTrajectory_Result__destroy(control_msgs__action__FollowJointTrajectory_Result * msg)
{
  if (msg) {
    control_msgs__action__FollowJointTrajectory_Result__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__FollowJointTrajectory_Result__Sequence__init(control_msgs__action__FollowJointTrajectory_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__FollowJointTrajectory_Result * data = NULL;
  if (size) {
    data = (control_msgs__action__FollowJointTrajectory_Result *)calloc(size, sizeof(control_msgs__action__FollowJointTrajectory_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__FollowJointTrajectory_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__FollowJointTrajectory_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__FollowJointTrajectory_Result__Sequence__fini(control_msgs__action__FollowJointTrajectory_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__FollowJointTrajectory_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__FollowJointTrajectory_Result__Sequence *
control_msgs__action__FollowJointTrajectory_Result__Sequence__create(size_t size)
{
  control_msgs__action__FollowJointTrajectory_Result__Sequence * array = (control_msgs__action__FollowJointTrajectory_Result__Sequence *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__FollowJointTrajectory_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__FollowJointTrajectory_Result__Sequence__destroy(control_msgs__action__FollowJointTrajectory_Result__Sequence * array)
{
  if (array) {
    control_msgs__action__FollowJointTrajectory_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_names`
// Member `multi_dof_joint_names`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `desired`
// Member `actual`
// Member `error`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"
// Member `multi_dof_desired`
// Member `multi_dof_actual`
// Member `multi_dof_error`
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__functions.h"

bool
control_msgs__action__FollowJointTrajectory_Feedback__init(control_msgs__action__FollowJointTrajectory_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_msgs__action__FollowJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    control_msgs__action__FollowJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // desired
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->desired)) {
    control_msgs__action__FollowJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // actual
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->actual)) {
    control_msgs__action__FollowJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // error
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->error)) {
    control_msgs__action__FollowJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // multi_dof_joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->multi_dof_joint_names, 0)) {
    control_msgs__action__FollowJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // multi_dof_desired
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&msg->multi_dof_desired)) {
    control_msgs__action__FollowJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // multi_dof_actual
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&msg->multi_dof_actual)) {
    control_msgs__action__FollowJointTrajectory_Feedback__fini(msg);
    return false;
  }
  // multi_dof_error
  if (!trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__init(&msg->multi_dof_error)) {
    control_msgs__action__FollowJointTrajectory_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__FollowJointTrajectory_Feedback__fini(control_msgs__action__FollowJointTrajectory_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // desired
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->desired);
  // actual
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->actual);
  // error
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->error);
  // multi_dof_joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->multi_dof_joint_names);
  // multi_dof_desired
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&msg->multi_dof_desired);
  // multi_dof_actual
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&msg->multi_dof_actual);
  // multi_dof_error
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__fini(&msg->multi_dof_error);
}

control_msgs__action__FollowJointTrajectory_Feedback *
control_msgs__action__FollowJointTrajectory_Feedback__create()
{
  control_msgs__action__FollowJointTrajectory_Feedback * msg = (control_msgs__action__FollowJointTrajectory_Feedback *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__FollowJointTrajectory_Feedback));
  bool success = control_msgs__action__FollowJointTrajectory_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__FollowJointTrajectory_Feedback__destroy(control_msgs__action__FollowJointTrajectory_Feedback * msg)
{
  if (msg) {
    control_msgs__action__FollowJointTrajectory_Feedback__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__FollowJointTrajectory_Feedback__Sequence__init(control_msgs__action__FollowJointTrajectory_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__FollowJointTrajectory_Feedback * data = NULL;
  if (size) {
    data = (control_msgs__action__FollowJointTrajectory_Feedback *)calloc(size, sizeof(control_msgs__action__FollowJointTrajectory_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__FollowJointTrajectory_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__FollowJointTrajectory_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__FollowJointTrajectory_Feedback__Sequence__fini(control_msgs__action__FollowJointTrajectory_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__FollowJointTrajectory_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__FollowJointTrajectory_Feedback__Sequence *
control_msgs__action__FollowJointTrajectory_Feedback__Sequence__create(size_t size)
{
  control_msgs__action__FollowJointTrajectory_Feedback__Sequence * array = (control_msgs__action__FollowJointTrajectory_Feedback__Sequence *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__FollowJointTrajectory_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__FollowJointTrajectory_Feedback__Sequence__destroy(control_msgs__action__FollowJointTrajectory_Feedback__Sequence * array)
{
  if (array) {
    control_msgs__action__FollowJointTrajectory_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"

bool
control_msgs__action__FollowJointTrajectory_SendGoal_Request__init(control_msgs__action__FollowJointTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_msgs__action__FollowJointTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!control_msgs__action__FollowJointTrajectory_Goal__init(&msg->goal)) {
    control_msgs__action__FollowJointTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__FollowJointTrajectory_SendGoal_Request__fini(control_msgs__action__FollowJointTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  control_msgs__action__FollowJointTrajectory_Goal__fini(&msg->goal);
}

control_msgs__action__FollowJointTrajectory_SendGoal_Request *
control_msgs__action__FollowJointTrajectory_SendGoal_Request__create()
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Request * msg = (control_msgs__action__FollowJointTrajectory_SendGoal_Request *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__FollowJointTrajectory_SendGoal_Request));
  bool success = control_msgs__action__FollowJointTrajectory_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__FollowJointTrajectory_SendGoal_Request__destroy(control_msgs__action__FollowJointTrajectory_SendGoal_Request * msg)
{
  if (msg) {
    control_msgs__action__FollowJointTrajectory_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence__init(control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__FollowJointTrajectory_SendGoal_Request * data = NULL;
  if (size) {
    data = (control_msgs__action__FollowJointTrajectory_SendGoal_Request *)calloc(size, sizeof(control_msgs__action__FollowJointTrajectory_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__FollowJointTrajectory_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__FollowJointTrajectory_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence__fini(control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__FollowJointTrajectory_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence *
control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence__create(size_t size)
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence * array = (control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence__destroy(control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence * array)
{
  if (array) {
    control_msgs__action__FollowJointTrajectory_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
control_msgs__action__FollowJointTrajectory_SendGoal_Response__init(control_msgs__action__FollowJointTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    control_msgs__action__FollowJointTrajectory_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__FollowJointTrajectory_SendGoal_Response__fini(control_msgs__action__FollowJointTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

control_msgs__action__FollowJointTrajectory_SendGoal_Response *
control_msgs__action__FollowJointTrajectory_SendGoal_Response__create()
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Response * msg = (control_msgs__action__FollowJointTrajectory_SendGoal_Response *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__FollowJointTrajectory_SendGoal_Response));
  bool success = control_msgs__action__FollowJointTrajectory_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__FollowJointTrajectory_SendGoal_Response__destroy(control_msgs__action__FollowJointTrajectory_SendGoal_Response * msg)
{
  if (msg) {
    control_msgs__action__FollowJointTrajectory_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence__init(control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__FollowJointTrajectory_SendGoal_Response * data = NULL;
  if (size) {
    data = (control_msgs__action__FollowJointTrajectory_SendGoal_Response *)calloc(size, sizeof(control_msgs__action__FollowJointTrajectory_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__FollowJointTrajectory_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__FollowJointTrajectory_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence__fini(control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__FollowJointTrajectory_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence *
control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence__create(size_t size)
{
  control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence * array = (control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence__destroy(control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence * array)
{
  if (array) {
    control_msgs__action__FollowJointTrajectory_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
control_msgs__action__FollowJointTrajectory_GetResult_Request__init(control_msgs__action__FollowJointTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_msgs__action__FollowJointTrajectory_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__FollowJointTrajectory_GetResult_Request__fini(control_msgs__action__FollowJointTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

control_msgs__action__FollowJointTrajectory_GetResult_Request *
control_msgs__action__FollowJointTrajectory_GetResult_Request__create()
{
  control_msgs__action__FollowJointTrajectory_GetResult_Request * msg = (control_msgs__action__FollowJointTrajectory_GetResult_Request *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__FollowJointTrajectory_GetResult_Request));
  bool success = control_msgs__action__FollowJointTrajectory_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__FollowJointTrajectory_GetResult_Request__destroy(control_msgs__action__FollowJointTrajectory_GetResult_Request * msg)
{
  if (msg) {
    control_msgs__action__FollowJointTrajectory_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence__init(control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__FollowJointTrajectory_GetResult_Request * data = NULL;
  if (size) {
    data = (control_msgs__action__FollowJointTrajectory_GetResult_Request *)calloc(size, sizeof(control_msgs__action__FollowJointTrajectory_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__FollowJointTrajectory_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__FollowJointTrajectory_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence__fini(control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__FollowJointTrajectory_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence *
control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence__create(size_t size)
{
  control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence * array = (control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence__destroy(control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence * array)
{
  if (array) {
    control_msgs__action__FollowJointTrajectory_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"

bool
control_msgs__action__FollowJointTrajectory_GetResult_Response__init(control_msgs__action__FollowJointTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!control_msgs__action__FollowJointTrajectory_Result__init(&msg->result)) {
    control_msgs__action__FollowJointTrajectory_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__FollowJointTrajectory_GetResult_Response__fini(control_msgs__action__FollowJointTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  control_msgs__action__FollowJointTrajectory_Result__fini(&msg->result);
}

control_msgs__action__FollowJointTrajectory_GetResult_Response *
control_msgs__action__FollowJointTrajectory_GetResult_Response__create()
{
  control_msgs__action__FollowJointTrajectory_GetResult_Response * msg = (control_msgs__action__FollowJointTrajectory_GetResult_Response *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__FollowJointTrajectory_GetResult_Response));
  bool success = control_msgs__action__FollowJointTrajectory_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__FollowJointTrajectory_GetResult_Response__destroy(control_msgs__action__FollowJointTrajectory_GetResult_Response * msg)
{
  if (msg) {
    control_msgs__action__FollowJointTrajectory_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence__init(control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__FollowJointTrajectory_GetResult_Response * data = NULL;
  if (size) {
    data = (control_msgs__action__FollowJointTrajectory_GetResult_Response *)calloc(size, sizeof(control_msgs__action__FollowJointTrajectory_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__FollowJointTrajectory_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__FollowJointTrajectory_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence__fini(control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__FollowJointTrajectory_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence *
control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence__create(size_t size)
{
  control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence * array = (control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence__destroy(control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence * array)
{
  if (array) {
    control_msgs__action__FollowJointTrajectory_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "control_msgs/action/detail/follow_joint_trajectory__functions.h"

bool
control_msgs__action__FollowJointTrajectory_FeedbackMessage__init(control_msgs__action__FollowJointTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    control_msgs__action__FollowJointTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!control_msgs__action__FollowJointTrajectory_Feedback__init(&msg->feedback)) {
    control_msgs__action__FollowJointTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__action__FollowJointTrajectory_FeedbackMessage__fini(control_msgs__action__FollowJointTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  control_msgs__action__FollowJointTrajectory_Feedback__fini(&msg->feedback);
}

control_msgs__action__FollowJointTrajectory_FeedbackMessage *
control_msgs__action__FollowJointTrajectory_FeedbackMessage__create()
{
  control_msgs__action__FollowJointTrajectory_FeedbackMessage * msg = (control_msgs__action__FollowJointTrajectory_FeedbackMessage *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__action__FollowJointTrajectory_FeedbackMessage));
  bool success = control_msgs__action__FollowJointTrajectory_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__action__FollowJointTrajectory_FeedbackMessage__destroy(control_msgs__action__FollowJointTrajectory_FeedbackMessage * msg)
{
  if (msg) {
    control_msgs__action__FollowJointTrajectory_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence__init(control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__action__FollowJointTrajectory_FeedbackMessage * data = NULL;
  if (size) {
    data = (control_msgs__action__FollowJointTrajectory_FeedbackMessage *)calloc(size, sizeof(control_msgs__action__FollowJointTrajectory_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__action__FollowJointTrajectory_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__action__FollowJointTrajectory_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence__fini(control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__action__FollowJointTrajectory_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence *
control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence__create(size_t size)
{
  control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence * array = (control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence *)malloc(sizeof(control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence__destroy(control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence * array)
{
  if (array) {
    control_msgs__action__FollowJointTrajectory_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
