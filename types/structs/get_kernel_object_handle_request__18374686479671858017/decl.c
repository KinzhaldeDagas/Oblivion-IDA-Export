struct get_kernel_object_handle_request
{
request_header __header;
obj_handle_t manager;
client_ptr_t user_ptr;
unsigned int access;
char __pad_28[4];
};
