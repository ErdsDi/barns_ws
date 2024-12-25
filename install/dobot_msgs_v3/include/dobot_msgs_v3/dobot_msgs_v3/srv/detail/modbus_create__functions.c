// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot_msgs_v3:srv/ModbusCreate.idl
// generated code does not contain a copyright notice
#include "dobot_msgs_v3/srv/detail/modbus_create__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ip`
#include "rosidl_runtime_c/string_functions.h"

bool
dobot_msgs_v3__srv__ModbusCreate_Request__init(dobot_msgs_v3__srv__ModbusCreate_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    dobot_msgs_v3__srv__ModbusCreate_Request__fini(msg);
    return false;
  }
  // port
  // slave_id
  // is_rtu
  return true;
}

void
dobot_msgs_v3__srv__ModbusCreate_Request__fini(dobot_msgs_v3__srv__ModbusCreate_Request * msg)
{
  if (!msg) {
    return;
  }
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
  // port
  // slave_id
  // is_rtu
}

bool
dobot_msgs_v3__srv__ModbusCreate_Request__are_equal(const dobot_msgs_v3__srv__ModbusCreate_Request * lhs, const dobot_msgs_v3__srv__ModbusCreate_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip), &(rhs->ip)))
  {
    return false;
  }
  // port
  if (lhs->port != rhs->port) {
    return false;
  }
  // slave_id
  if (lhs->slave_id != rhs->slave_id) {
    return false;
  }
  // is_rtu
  if (lhs->is_rtu != rhs->is_rtu) {
    return false;
  }
  return true;
}

bool
dobot_msgs_v3__srv__ModbusCreate_Request__copy(
  const dobot_msgs_v3__srv__ModbusCreate_Request * input,
  dobot_msgs_v3__srv__ModbusCreate_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ip), &(output->ip)))
  {
    return false;
  }
  // port
  output->port = input->port;
  // slave_id
  output->slave_id = input->slave_id;
  // is_rtu
  output->is_rtu = input->is_rtu;
  return true;
}

dobot_msgs_v3__srv__ModbusCreate_Request *
dobot_msgs_v3__srv__ModbusCreate_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__ModbusCreate_Request * msg = (dobot_msgs_v3__srv__ModbusCreate_Request *)allocator.allocate(sizeof(dobot_msgs_v3__srv__ModbusCreate_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs_v3__srv__ModbusCreate_Request));
  bool success = dobot_msgs_v3__srv__ModbusCreate_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs_v3__srv__ModbusCreate_Request__destroy(dobot_msgs_v3__srv__ModbusCreate_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs_v3__srv__ModbusCreate_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs_v3__srv__ModbusCreate_Request__Sequence__init(dobot_msgs_v3__srv__ModbusCreate_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__ModbusCreate_Request * data = NULL;

  if (size) {
    data = (dobot_msgs_v3__srv__ModbusCreate_Request *)allocator.zero_allocate(size, sizeof(dobot_msgs_v3__srv__ModbusCreate_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs_v3__srv__ModbusCreate_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs_v3__srv__ModbusCreate_Request__fini(&data[i - 1]);
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
dobot_msgs_v3__srv__ModbusCreate_Request__Sequence__fini(dobot_msgs_v3__srv__ModbusCreate_Request__Sequence * array)
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
      dobot_msgs_v3__srv__ModbusCreate_Request__fini(&array->data[i]);
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

dobot_msgs_v3__srv__ModbusCreate_Request__Sequence *
dobot_msgs_v3__srv__ModbusCreate_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__ModbusCreate_Request__Sequence * array = (dobot_msgs_v3__srv__ModbusCreate_Request__Sequence *)allocator.allocate(sizeof(dobot_msgs_v3__srv__ModbusCreate_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs_v3__srv__ModbusCreate_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs_v3__srv__ModbusCreate_Request__Sequence__destroy(dobot_msgs_v3__srv__ModbusCreate_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs_v3__srv__ModbusCreate_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs_v3__srv__ModbusCreate_Request__Sequence__are_equal(const dobot_msgs_v3__srv__ModbusCreate_Request__Sequence * lhs, const dobot_msgs_v3__srv__ModbusCreate_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs_v3__srv__ModbusCreate_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs_v3__srv__ModbusCreate_Request__Sequence__copy(
  const dobot_msgs_v3__srv__ModbusCreate_Request__Sequence * input,
  dobot_msgs_v3__srv__ModbusCreate_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs_v3__srv__ModbusCreate_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs_v3__srv__ModbusCreate_Request * data =
      (dobot_msgs_v3__srv__ModbusCreate_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs_v3__srv__ModbusCreate_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs_v3__srv__ModbusCreate_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs_v3__srv__ModbusCreate_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `index`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
dobot_msgs_v3__srv__ModbusCreate_Response__init(dobot_msgs_v3__srv__ModbusCreate_Response * msg)
{
  if (!msg) {
    return false;
  }
  // res
  // index
  if (!rosidl_runtime_c__String__init(&msg->index)) {
    dobot_msgs_v3__srv__ModbusCreate_Response__fini(msg);
    return false;
  }
  return true;
}

void
dobot_msgs_v3__srv__ModbusCreate_Response__fini(dobot_msgs_v3__srv__ModbusCreate_Response * msg)
{
  if (!msg) {
    return;
  }
  // res
  // index
  rosidl_runtime_c__String__fini(&msg->index);
}

bool
dobot_msgs_v3__srv__ModbusCreate_Response__are_equal(const dobot_msgs_v3__srv__ModbusCreate_Response * lhs, const dobot_msgs_v3__srv__ModbusCreate_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // res
  if (lhs->res != rhs->res) {
    return false;
  }
  // index
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->index), &(rhs->index)))
  {
    return false;
  }
  return true;
}

bool
dobot_msgs_v3__srv__ModbusCreate_Response__copy(
  const dobot_msgs_v3__srv__ModbusCreate_Response * input,
  dobot_msgs_v3__srv__ModbusCreate_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // res
  output->res = input->res;
  // index
  if (!rosidl_runtime_c__String__copy(
      &(input->index), &(output->index)))
  {
    return false;
  }
  return true;
}

dobot_msgs_v3__srv__ModbusCreate_Response *
dobot_msgs_v3__srv__ModbusCreate_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__ModbusCreate_Response * msg = (dobot_msgs_v3__srv__ModbusCreate_Response *)allocator.allocate(sizeof(dobot_msgs_v3__srv__ModbusCreate_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs_v3__srv__ModbusCreate_Response));
  bool success = dobot_msgs_v3__srv__ModbusCreate_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs_v3__srv__ModbusCreate_Response__destroy(dobot_msgs_v3__srv__ModbusCreate_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs_v3__srv__ModbusCreate_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs_v3__srv__ModbusCreate_Response__Sequence__init(dobot_msgs_v3__srv__ModbusCreate_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__ModbusCreate_Response * data = NULL;

  if (size) {
    data = (dobot_msgs_v3__srv__ModbusCreate_Response *)allocator.zero_allocate(size, sizeof(dobot_msgs_v3__srv__ModbusCreate_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs_v3__srv__ModbusCreate_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs_v3__srv__ModbusCreate_Response__fini(&data[i - 1]);
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
dobot_msgs_v3__srv__ModbusCreate_Response__Sequence__fini(dobot_msgs_v3__srv__ModbusCreate_Response__Sequence * array)
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
      dobot_msgs_v3__srv__ModbusCreate_Response__fini(&array->data[i]);
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

dobot_msgs_v3__srv__ModbusCreate_Response__Sequence *
dobot_msgs_v3__srv__ModbusCreate_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__ModbusCreate_Response__Sequence * array = (dobot_msgs_v3__srv__ModbusCreate_Response__Sequence *)allocator.allocate(sizeof(dobot_msgs_v3__srv__ModbusCreate_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs_v3__srv__ModbusCreate_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs_v3__srv__ModbusCreate_Response__Sequence__destroy(dobot_msgs_v3__srv__ModbusCreate_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs_v3__srv__ModbusCreate_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs_v3__srv__ModbusCreate_Response__Sequence__are_equal(const dobot_msgs_v3__srv__ModbusCreate_Response__Sequence * lhs, const dobot_msgs_v3__srv__ModbusCreate_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs_v3__srv__ModbusCreate_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs_v3__srv__ModbusCreate_Response__Sequence__copy(
  const dobot_msgs_v3__srv__ModbusCreate_Response__Sequence * input,
  dobot_msgs_v3__srv__ModbusCreate_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs_v3__srv__ModbusCreate_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs_v3__srv__ModbusCreate_Response * data =
      (dobot_msgs_v3__srv__ModbusCreate_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs_v3__srv__ModbusCreate_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs_v3__srv__ModbusCreate_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs_v3__srv__ModbusCreate_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
