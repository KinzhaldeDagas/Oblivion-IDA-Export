struct send_hardware_message_request
{
request_header __header;
user_handle_t win;
hw_input_t input;
unsigned int flags;
char __pad_60[4];
};
