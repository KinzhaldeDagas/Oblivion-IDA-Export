struct get_window_tree_reply
{
reply_header __header;
user_handle_t parent;
user_handle_t owner;
user_handle_t next_sibling;
user_handle_t prev_sibling;
user_handle_t first_sibling;
user_handle_t last_sibling;
user_handle_t first_child;
user_handle_t last_child;
};
