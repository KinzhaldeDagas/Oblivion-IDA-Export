struct init_process_done_reply
{
reply_header __header;
client_ptr_t entry;
int suspend;
char __pad_20[4];
};
