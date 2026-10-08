struct get_file_info_request
{
request_header __header;
obj_handle_t handle;
unsigned int info_class;
char __pad_20[4];
};
