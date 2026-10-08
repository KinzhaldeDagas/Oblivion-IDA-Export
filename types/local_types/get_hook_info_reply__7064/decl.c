struct get_hook_info_reply
{
reply_header __header;
user_handle_t handle;
int id;
process_id_t pid;
thread_id_t tid;
client_ptr_t proc;
int unicode;
char __pad_36[4];
};
