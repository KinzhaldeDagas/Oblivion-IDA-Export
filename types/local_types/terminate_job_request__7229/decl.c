struct terminate_job_request
{
request_header __header;
obj_handle_t handle;
int status;
char __pad_20[4];
};
