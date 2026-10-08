struct set_foreground_window_reply
{
reply_header __header;
user_handle_t previous;
int send_msg_old;
int send_msg_new;
char __pad_20[4];
};
