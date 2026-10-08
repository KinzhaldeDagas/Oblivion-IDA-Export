struct create_winstation_request
{
request_header __header;
unsigned int flags;
unsigned int access;
unsigned int attributes;
obj_handle_t rootdir;
char __pad_28[4];
};
