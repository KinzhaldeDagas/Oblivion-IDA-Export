struct register_hotkey_request
{
request_header __header;
user_handle_t window;
int id;
unsigned int flags;
unsigned int vkey;
char __pad_28[4];
};
