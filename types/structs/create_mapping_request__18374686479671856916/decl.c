struct create_mapping_request
{
request_header __header;
unsigned int access;
unsigned int flags;
unsigned int file_access;
mem_size_t size;
obj_handle_t file_handle;
char __pad_36[4];
};
