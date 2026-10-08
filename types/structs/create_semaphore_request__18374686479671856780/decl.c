struct create_semaphore_request
{
request_header __header;
unsigned int access;
unsigned int initial;
unsigned int max;
};
