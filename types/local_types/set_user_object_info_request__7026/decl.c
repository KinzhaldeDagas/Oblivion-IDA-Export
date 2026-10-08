struct set_user_object_info_request
{
request_header __header;
obj_handle_t handle;
unsigned int flags;
unsigned int obj_flags;
};
