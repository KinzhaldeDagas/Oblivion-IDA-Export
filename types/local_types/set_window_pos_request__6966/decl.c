struct set_window_pos_request
{
request_header __header;
unsigned __int16 swp_flags;
unsigned __int16 paint_flags;
user_handle_t handle;
user_handle_t previous;
rectangle_t window;
rectangle_t client;
};
