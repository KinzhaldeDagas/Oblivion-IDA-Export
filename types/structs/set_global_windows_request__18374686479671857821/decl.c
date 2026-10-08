struct set_global_windows_request
{
request_header __header;
unsigned int flags;
user_handle_t shell_window;
user_handle_t shell_listview;
user_handle_t progman_window;
user_handle_t taskman_window;
};
