struct debug_process_request
{
request_header __header;
obj_handle_t handle;
obj_handle_t debug;
int attach;
};
