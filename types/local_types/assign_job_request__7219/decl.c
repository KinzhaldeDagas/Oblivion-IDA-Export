struct assign_job_request
{
request_header __header;
obj_handle_t job;
obj_handle_t process;
char __pad_20[4];
};
