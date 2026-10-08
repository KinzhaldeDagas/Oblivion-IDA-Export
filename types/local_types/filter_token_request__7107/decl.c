struct filter_token_request
{
request_header __header;
obj_handle_t handle;
unsigned int flags;
data_size_t privileges_size;
};
