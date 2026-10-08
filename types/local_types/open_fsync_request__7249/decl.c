struct open_fsync_request
{
request_header __header;
unsigned int access;
unsigned int attributes;
obj_handle_t rootdir;
int type;
char __pad_28[4];
};
