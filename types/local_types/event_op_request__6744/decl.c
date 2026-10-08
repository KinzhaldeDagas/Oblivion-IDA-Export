struct event_op_request
{
request_header __header;
obj_handle_t handle;
int op;
char __pad_20[4];
};
