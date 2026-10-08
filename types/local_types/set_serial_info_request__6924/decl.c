struct set_serial_info_request
{
request_header __header;
obj_handle_t handle;
int flags;
char __pad_20[4];
};
