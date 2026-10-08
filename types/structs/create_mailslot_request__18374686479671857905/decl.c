struct create_mailslot_request
{
request_header __header;
unsigned int access;
timeout_t read_timeout;
unsigned int max_msgsize;
char __pad_28[4];
};
