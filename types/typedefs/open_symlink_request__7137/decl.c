struct open_symlink_request
{
request_header __header;
unsigned int access;
unsigned int attributes;
obj_handle_t rootdir;
};
