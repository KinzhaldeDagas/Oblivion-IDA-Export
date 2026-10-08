struct get_message_request
{
request_header __header;
unsigned int flags;
user_handle_t get_win;
unsigned int get_first;
unsigned int get_last;
unsigned int hw_id;
unsigned int wake_mask;
unsigned int changed_mask;
};
