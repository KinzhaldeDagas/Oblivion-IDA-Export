struct set_cursor_reply
{
reply_header __header;
user_handle_t prev_handle;
int prev_count;
int prev_x;
int prev_y;
int new_x;
int new_y;
rectangle_t new_clip;
unsigned int last_change;
char __pad_52[4];
};
