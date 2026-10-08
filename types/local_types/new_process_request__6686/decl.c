struct new_process_request
{
request_header __header;
obj_handle_t token;
obj_handle_t debug;
obj_handle_t parent_process;
unsigned int flags;
int socket_fd;
unsigned int access;
unsigned __int16 machine;
char __pad_38[2];
data_size_t info_size;
data_size_t handles_size;
data_size_t jobs_size;
char __pad_52[4];
};
