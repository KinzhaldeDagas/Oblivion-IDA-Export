struct access_check_reply
{
reply_header __header;
unsigned int access_granted;
unsigned int access_status;
unsigned int privileges_len;
char __pad_20[4];
};
