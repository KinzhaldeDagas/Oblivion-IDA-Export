struct set_parent_reply
{
reply_header __header;
user_handle_t old_parent;
user_handle_t full_parent;
int dpi;
int awareness;
};
