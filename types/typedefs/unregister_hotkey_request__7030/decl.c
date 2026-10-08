struct unregister_hotkey_request
{
request_header __header;
user_handle_t window;
int id;
char __pad_20[4];
};
