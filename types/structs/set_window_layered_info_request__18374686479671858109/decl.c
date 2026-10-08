struct set_window_layered_info_request
{
request_header __header;
user_handle_t handle;
unsigned int color_key;
unsigned int alpha;
unsigned int flags;
char __pad_28[4];
};
