struct get_next_console_request_request
{
request_header __header;
obj_handle_t handle;
int signal;
int read;
unsigned int status;
char __pad_28[4];
};
