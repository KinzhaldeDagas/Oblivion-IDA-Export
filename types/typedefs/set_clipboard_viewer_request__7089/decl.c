struct set_clipboard_viewer_request
{
request_header __header;
user_handle_t viewer;
user_handle_t previous;
char __pad_20[4];
};
