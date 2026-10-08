struct get_token_sid_request
{
request_header __header;
obj_handle_t handle;
unsigned int which_sid;
char __pad_20[4];
};
