struct get_clipboard_info_reply
{
reply_header __header;
user_handle_t window;
user_handle_t owner;
user_handle_t viewer;
unsigned int seqno;
};
