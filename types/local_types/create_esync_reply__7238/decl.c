struct create_esync_reply
{
reply_header __header;
obj_handle_t handle;
int type;
unsigned int shm_idx;
char __pad_20[4];
};
