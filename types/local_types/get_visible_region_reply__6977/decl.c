struct get_visible_region_reply
{
reply_header __header;
user_handle_t top_win;
rectangle_t top_rect;
rectangle_t win_rect;
unsigned int paint_flags;
data_size_t total_size;
char __pad_52[4];
};
