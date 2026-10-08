struct queue_exception_event_request
{
request_header __header;
int first;
unsigned int code;
unsigned int flags;
client_ptr_t record;
client_ptr_t address;
data_size_t len;
char __pad_44[4];
};
