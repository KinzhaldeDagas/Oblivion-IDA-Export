struct set_capture_window_request
{
request_header __header;
user_handle_t handle;
unsigned int flags;
char __pad_20[4];
};
