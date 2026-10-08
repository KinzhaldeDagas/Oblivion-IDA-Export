struct get_serial_info_reply
{
reply_header __header;
unsigned int eventmask;
unsigned int cookie;
unsigned int pending_write;
char __pad_20[4];
};
