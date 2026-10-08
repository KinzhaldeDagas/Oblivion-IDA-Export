struct get_thread_times_reply
{
reply_header __header;
timeout_t creation_time;
timeout_t exit_time;
int unix_pid;
int unix_tid;
};
