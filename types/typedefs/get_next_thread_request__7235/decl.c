struct get_next_thread_request
{
request_header __header;
obj_handle_t process;
obj_handle_t last;
unsigned int access;
unsigned int attributes;
unsigned int flags;
};
