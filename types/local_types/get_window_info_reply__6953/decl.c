struct get_window_info_reply
{
reply_header __header;
user_handle_t full_handle;
user_handle_t last_active;
process_id_t pid;
thread_id_t tid;
atom_t atom;
int is_unicode;
int dpi;
int awareness;
};
