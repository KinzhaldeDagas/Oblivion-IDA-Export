struct select_reply
{
reply_header __header;
apc_call_t call;
obj_handle_t apc_handle;
int signaled;
};
