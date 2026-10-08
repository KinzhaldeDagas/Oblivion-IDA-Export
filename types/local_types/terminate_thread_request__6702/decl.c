struct terminate_thread_request
{
request_header __header;
obj_handle_t handle;
int exit_code;
char __pad_20[4];
};
