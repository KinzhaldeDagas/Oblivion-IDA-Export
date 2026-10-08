struct set_mailslot_info_request
{
request_header __header;
obj_handle_t handle;
timeout_t read_timeout;
unsigned int flags;
char __pad_28[4];
};
