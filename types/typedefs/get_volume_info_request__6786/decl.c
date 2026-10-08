struct get_volume_info_request
{
request_header __header;
obj_handle_t handle;
async_data_t async;
unsigned int info_class;
char __pad_60[4];
};
