struct release_kernel_object_request
{
request_header __header;
obj_handle_t manager;
client_ptr_t user_ptr;
};
