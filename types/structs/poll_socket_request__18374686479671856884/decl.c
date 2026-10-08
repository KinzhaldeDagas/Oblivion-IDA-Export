struct poll_socket_request
{
request_header __header;
char __pad_12[4];
async_data_t async;
timeout_t timeout;
};
