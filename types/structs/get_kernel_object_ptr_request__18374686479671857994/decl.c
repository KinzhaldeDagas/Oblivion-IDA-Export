struct get_kernel_object_ptr_request
{
request_header __header;
obj_handle_t manager;
obj_handle_t handle;
char __pad_20[4];
};
