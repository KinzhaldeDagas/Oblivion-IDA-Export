struct get_update_region_request
{
request_header __header;
user_handle_t window;
user_handle_t from_child;
unsigned int flags;
};
