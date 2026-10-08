struct write_reply
{
reply_header __header;
obj_handle_t wait;
unsigned int options;
data_size_t size;
char __pad_20[4];
};
