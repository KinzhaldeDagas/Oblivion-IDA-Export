struct open_thread_request
{
request_header __header;
thread_id_t tid;
unsigned int access;
unsigned int attributes;
};
