struct open_winstation_request
{
request_header __header;
unsigned int access;
unsigned int attributes;
obj_handle_t rootdir;
};
