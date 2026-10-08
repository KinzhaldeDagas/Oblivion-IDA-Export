struct set_hook_request
{
request_header __header;
int id;
process_id_t pid;
thread_id_t tid;
int event_min;
int event_max;
client_ptr_t proc;
int flags;
int unicode;
};
