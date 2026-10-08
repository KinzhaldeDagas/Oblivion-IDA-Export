struct set_parent_request
{
request_header __header;
user_handle_t handle;
user_handle_t parent;
char __pad_20[4];
};
