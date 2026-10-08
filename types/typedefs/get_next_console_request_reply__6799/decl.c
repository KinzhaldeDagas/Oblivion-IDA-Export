struct get_next_console_request_reply
{
reply_header __header;
unsigned int code;
unsigned int output;
data_size_t out_size;
char __pad_20[4];
};
