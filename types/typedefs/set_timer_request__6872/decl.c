struct set_timer_request
{
request_header __header;
obj_handle_t handle;
timeout_t expire;
client_ptr_t callback;
client_ptr_t arg;
int period;
char __pad_44[4];
};
