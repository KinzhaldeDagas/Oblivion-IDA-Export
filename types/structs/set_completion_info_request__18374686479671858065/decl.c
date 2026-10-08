struct set_completion_info_request
{
request_header __header;
obj_handle_t handle;
apc_param_t ckey;
obj_handle_t chandle;
char __pad_28[4];
};
