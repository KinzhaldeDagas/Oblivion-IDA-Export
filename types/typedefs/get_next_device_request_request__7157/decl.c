struct get_next_device_request_request
{
request_header __header;
obj_handle_t manager;
obj_handle_t prev;
unsigned int status;
client_ptr_t user_ptr;
};
