struct create_device_request
{
request_header __header;
obj_handle_t rootdir;
client_ptr_t user_ptr;
obj_handle_t manager;
char __pad_28[4];
};
