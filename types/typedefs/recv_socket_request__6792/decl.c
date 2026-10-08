struct recv_socket_request
{
request_header __header;
int oob;
async_data_t async;
unsigned int status;
unsigned int total;
};
