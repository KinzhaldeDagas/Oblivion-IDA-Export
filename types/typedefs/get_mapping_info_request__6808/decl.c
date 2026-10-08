struct get_mapping_info_request
{
request_header __header;
obj_handle_t handle;
unsigned int access;
char __pad_20[4];
};
