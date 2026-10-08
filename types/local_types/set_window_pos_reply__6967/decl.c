struct set_window_pos_reply
{
reply_header __header;
unsigned int new_style;
unsigned int new_ex_style;
user_handle_t surface_win;
int needs_update;
};
