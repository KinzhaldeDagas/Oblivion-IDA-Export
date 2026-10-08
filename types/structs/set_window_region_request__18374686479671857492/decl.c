struct set_window_region_request
{
request_header __header;
user_handle_t window;
int redraw;
char __pad_20[4];
};
