struct access_check_request
{
request_header __header;
obj_handle_t handle;
unsigned int desired_access;
generic_map_t mapping;
char __pad_36[4];
};
