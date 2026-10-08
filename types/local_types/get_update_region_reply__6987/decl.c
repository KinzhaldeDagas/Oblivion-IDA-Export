struct get_update_region_reply
{
reply_header __header;
user_handle_t child;
unsigned int flags;
data_size_t total_size;
char __pad_20[4];
};
