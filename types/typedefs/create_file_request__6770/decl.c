struct create_file_request
{
request_header __header;
unsigned int access;
unsigned int sharing;
int create;
unsigned int options;
unsigned int attrs;
};
