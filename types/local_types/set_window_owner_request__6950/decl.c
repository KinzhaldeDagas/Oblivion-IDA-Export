struct set_window_owner_request
{
request_header __header;
user_handle_t handle;
user_handle_t owner;
char __pad_20[4];
};
