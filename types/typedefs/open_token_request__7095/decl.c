struct open_token_request
{
request_header __header;
obj_handle_t handle;
unsigned int access;
unsigned int attributes;
unsigned int flags;
char __pad_28[4];
};
