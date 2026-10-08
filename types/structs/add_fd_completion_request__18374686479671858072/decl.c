struct add_fd_completion_request
{
request_header __header;
obj_handle_t handle;
apc_param_t cvalue;
apc_param_t information;
unsigned int status;
int async;
};
