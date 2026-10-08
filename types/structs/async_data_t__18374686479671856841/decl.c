struct async_data_t
{
obj_handle_t handle;
obj_handle_t event;
client_ptr_t iosb;
client_ptr_t user;
client_ptr_t apc;
apc_param_t apc_context;
};
