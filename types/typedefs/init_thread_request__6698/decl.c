struct init_thread_request
{
request_header __header;
int unix_tid;
int reply_fd;
int wait_fd;
client_ptr_t teb;
client_ptr_t entry;
};
