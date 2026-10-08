struct check_token_privileges_request
{
request_header __header;
obj_handle_t handle;
int all_required;
char __pad_20[4];
};
