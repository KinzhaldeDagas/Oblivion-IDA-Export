struct get_mapping_info_reply
{
reply_header __header;
mem_size_t size;
unsigned int flags;
obj_handle_t shared_file;
data_size_t total;
char __pad_28[4];
};
