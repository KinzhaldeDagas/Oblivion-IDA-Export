struct get_process_info_reply
{
reply_header __header;
process_id_t pid;
process_id_t ppid;
affinity_t affinity;
client_ptr_t peb;
timeout_t start_time;
timeout_t end_time;
unsigned int session_id;
int exit_code;
int priority;
unsigned __int16 machine;
char __pad_62[2];
};
