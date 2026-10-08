struct register_async_request
{
request_header __header;
int type;
async_data_t async;
int count;
char __pad_60[4];
};
