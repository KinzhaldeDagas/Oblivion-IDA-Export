struct ioctl_request
{
request_header __header;
ioctl_code_t code;
async_data_t async;
};
