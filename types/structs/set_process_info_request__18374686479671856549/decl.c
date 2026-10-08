struct set_process_info_request
{
request_header __header;
obj_handle_t handle;
int mask;
int priority;
affinity_t affinity;
};
