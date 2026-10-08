struct new_thread_request
{
request_header __header;
obj_handle_t process;
unsigned int access;
int suspend;
int request_fd;
char __pad_28[4];
};
