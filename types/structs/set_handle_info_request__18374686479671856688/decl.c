struct set_handle_info_request
{
request_header __header;
obj_handle_t handle;
int flags;
int mask;
};
