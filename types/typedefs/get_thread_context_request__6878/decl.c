struct get_thread_context_request
{
request_header __header;
obj_handle_t handle;
obj_handle_t context;
unsigned int flags;
unsigned __int16 machine;
char __pad_26[6];
};
