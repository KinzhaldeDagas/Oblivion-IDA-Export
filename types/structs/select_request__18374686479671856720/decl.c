struct select_request
{
request_header __header;
int flags;
client_ptr_t cookie;
abstime_t timeout;
data_size_t size;
obj_handle_t prev_apc;
};
