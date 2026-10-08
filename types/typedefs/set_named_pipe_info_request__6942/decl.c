struct set_named_pipe_info_request
{
request_header __header;
obj_handle_t handle;
unsigned int flags;
char __pad_20[4];
};
