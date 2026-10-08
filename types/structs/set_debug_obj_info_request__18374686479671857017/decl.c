struct set_debug_obj_info_request
{
request_header __header;
obj_handle_t debug;
unsigned int flags;
char __pad_20[4];
};
