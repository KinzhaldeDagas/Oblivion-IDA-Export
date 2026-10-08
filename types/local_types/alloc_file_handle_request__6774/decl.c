struct alloc_file_handle_request
{
request_header __header;
unsigned int access;
unsigned int attributes;
int fd;
};
