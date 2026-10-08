struct delete_device_request
{
request_header __header;
obj_handle_t manager;
client_ptr_t device;
};
