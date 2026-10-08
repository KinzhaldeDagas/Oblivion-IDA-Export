struct get_object_info_reply
{
reply_header __header;
unsigned int access;
unsigned int ref_count;
unsigned int handle_count;
char __pad_20[4];
};
