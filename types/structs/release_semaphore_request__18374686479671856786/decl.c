struct release_semaphore_request
{
request_header __header;
obj_handle_t handle;
unsigned int count;
char __pad_20[4];
};
