struct set_security_object_request
{
request_header __header;
obj_handle_t handle;
unsigned int security_info;
char __pad_20[4];
};
