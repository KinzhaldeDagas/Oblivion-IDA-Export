struct new_process_reply
{
reply_header __header;
obj_handle_t info;
process_id_t pid;
obj_handle_t handle;
char __pad_20[4];
};
