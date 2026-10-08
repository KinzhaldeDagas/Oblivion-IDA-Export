struct dup_handle_request
{
request_header __header;
obj_handle_t src_process;
obj_handle_t src_handle;
obj_handle_t dst_process;
unsigned int access;
unsigned int attributes;
unsigned int options;
char __pad_36[4];
};
