struct map_view_request
{
request_header __header;
obj_handle_t mapping;
unsigned int access;
char __pad_20[4];
client_ptr_t base;
mem_size_t size;
file_pos_t start;
};
