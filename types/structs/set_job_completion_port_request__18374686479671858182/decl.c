struct set_job_completion_port_request
{
request_header __header;
obj_handle_t job;
obj_handle_t port;
char __pad_20[4];
client_ptr_t key;
};
