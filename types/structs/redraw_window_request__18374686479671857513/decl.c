struct redraw_window_request
{
request_header __header;
user_handle_t window;
unsigned int flags;
char __pad_20[4];
};
