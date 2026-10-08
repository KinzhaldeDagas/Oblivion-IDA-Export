struct adjust_token_privileges_request
{
request_header __header;
obj_handle_t handle;
int disable_all;
int get_modified_state;
};
