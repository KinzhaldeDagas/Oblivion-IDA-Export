struct register_hotkey_reply
{
reply_header __header;
int replaced;
unsigned int flags;
unsigned int vkey;
char __pad_20[4];
};
