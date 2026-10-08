struct get_thread_info_reply
{
reply_header __header;
process_id_t pid;
thread_id_t tid;
client_ptr_t teb;
client_ptr_t entry_point;
affinity_t affinity;
int exit_code;
int priority;
int last;
int suspend_count;
int dbg_hidden;
data_size_t desc_len;
};
