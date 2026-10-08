struct set_caret_info_reply
{
reply_header __header;
user_handle_t full_handle;
rectangle_t old_rect;
int old_hide;
int old_state;
char __pad_36[4];
};
