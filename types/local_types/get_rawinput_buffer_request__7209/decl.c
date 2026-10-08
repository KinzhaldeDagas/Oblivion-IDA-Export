struct get_rawinput_buffer_request
{
request_header __header;
data_size_t rawinput_size;
data_size_t buffer_size;
char __pad_20[4];
};
