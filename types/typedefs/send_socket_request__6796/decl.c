struct send_socket_request
{
request_header __header;
char __pad_12[4];
async_data_t async;
unsigned int status;
unsigned int total;
};
