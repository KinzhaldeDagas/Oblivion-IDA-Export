struct get_clipboard_data_reply
{
reply_header __header;
unsigned int from;
user_handle_t owner;
unsigned int seqno;
data_size_t total;
};
