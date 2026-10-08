struct open_process_request
{
request_header __header;
process_id_t pid;
unsigned int access;
unsigned int attributes;
};
