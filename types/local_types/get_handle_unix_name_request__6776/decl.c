struct get_handle_unix_name_request
{
request_header __header;
obj_handle_t handle;
int nofollow;
char __pad_20[4];
};
