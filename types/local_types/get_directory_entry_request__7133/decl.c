struct get_directory_entry_request
{
request_header __header;
obj_handle_t handle;
unsigned int index;
char __pad_20[4];
};
