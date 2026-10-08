struct duplicate_token_request
{
request_header __header;
obj_handle_t handle;
unsigned int access;
int primary;
int impersonation_level;
char __pad_28[4];
};
