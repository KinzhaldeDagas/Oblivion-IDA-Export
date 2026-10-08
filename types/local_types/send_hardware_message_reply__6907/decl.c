struct send_hardware_message_reply
{
reply_header __header;
int wait;
int prev_x;
int prev_y;
int new_x;
int new_y;
char __pad_28[4];
};
