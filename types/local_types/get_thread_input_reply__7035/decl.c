struct get_thread_input_reply
{
reply_header __header;
user_handle_t focus;
user_handle_t capture;
user_handle_t active;
user_handle_t foreground;
user_handle_t menu_owner;
user_handle_t move_size;
user_handle_t caret;
user_handle_t cursor;
int show_count;
rectangle_t rect;
char __pad_60[4];
};
