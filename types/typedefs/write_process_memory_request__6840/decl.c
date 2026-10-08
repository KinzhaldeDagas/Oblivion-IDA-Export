struct write_process_memory_request
{
request_header __header;
obj_handle_t handle;
client_ptr_t addr;
};
