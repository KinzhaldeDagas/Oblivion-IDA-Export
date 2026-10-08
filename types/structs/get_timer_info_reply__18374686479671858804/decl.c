struct get_timer_info_reply
{
reply_header __header;
timeout_t when;
int signaled;
char __pad_20[4];
};
