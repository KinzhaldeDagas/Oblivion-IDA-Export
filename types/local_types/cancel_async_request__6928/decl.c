struct cancel_async_request
{
request_header __header;
obj_handle_t handle;
client_ptr_t iosb;
int only_thread;
char __pad_28[4];
};
