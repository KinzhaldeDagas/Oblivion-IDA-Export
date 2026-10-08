struct get_process_debug_info_reply
{
reply_header __header;
obj_handle_t debug;
int debug_children;
};
