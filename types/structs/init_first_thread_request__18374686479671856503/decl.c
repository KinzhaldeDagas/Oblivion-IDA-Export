struct init_first_thread_request
{
request_header __header;
int unix_pid;
int unix_tid;
int debug_level;
int reply_fd;
int wait_fd;
};
