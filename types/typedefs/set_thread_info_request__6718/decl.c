struct set_thread_info_request
{
request_header __header;
obj_handle_t handle;
int mask;
int priority;
affinity_t affinity;
client_ptr_t entry_point;
obj_handle_t token;
char __pad_44[4];
};
