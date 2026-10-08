struct open_desktop_request
{
request_header __header;
obj_handle_t winsta;
unsigned int flags;
unsigned int access;
unsigned int attributes;
char __pad_28[4];
};
