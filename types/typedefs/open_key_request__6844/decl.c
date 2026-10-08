struct open_key_request
{
request_header __header;
obj_handle_t parent;
unsigned int access;
unsigned int attributes;
};
