struct open_file_object_request
{
request_header __header;
unsigned int access;
unsigned int attributes;
obj_handle_t rootdir;
unsigned int sharing;
unsigned int options;
};
