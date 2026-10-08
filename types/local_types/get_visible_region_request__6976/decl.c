struct get_visible_region_request
{
request_header __header;
user_handle_t window;
unsigned int flags;
char __pad_20[4];
};
