struct set_global_windows_reply
{
reply_header __header;
user_handle_t old_shell_window;
user_handle_t old_shell_listview;
user_handle_t old_progman_window;
user_handle_t old_taskman_window;
};
