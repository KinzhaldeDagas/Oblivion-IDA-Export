struct start_hook_chain_reply
{
reply_header __header;
user_handle_t handle;
process_id_t pid;
thread_id_t tid;
int unicode;
client_ptr_t proc;
unsigned int active_hooks;
char __pad_36[4];
};
