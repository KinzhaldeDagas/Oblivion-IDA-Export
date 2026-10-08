struct set_irp_result_request
{
request_header __header;
obj_handle_t handle;
unsigned int status;
data_size_t size;
};
