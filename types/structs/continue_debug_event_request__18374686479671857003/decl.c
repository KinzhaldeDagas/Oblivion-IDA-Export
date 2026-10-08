struct continue_debug_event_request
{
request_header __header;
obj_handle_t debug;
process_id_t pid;
thread_id_t tid;
unsigned int status;
char __pad_28[4];
};
