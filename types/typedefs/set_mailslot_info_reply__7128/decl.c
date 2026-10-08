struct set_mailslot_info_reply
{
reply_header __header;
timeout_t read_timeout;
unsigned int max_msgsize;
char __pad_20[4];
};
