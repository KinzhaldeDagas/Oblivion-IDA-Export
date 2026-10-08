struct init_first_thread_reply
{
reply_header __header;
process_id_t pid;
thread_id_t tid;
timeout_t server_start;
unsigned int session_id;
data_size_t info_size;
};
