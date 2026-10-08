struct set_job_limits_request
{
request_header __header;
obj_handle_t handle;
unsigned int limit_flags;
char __pad_20[4];
};
