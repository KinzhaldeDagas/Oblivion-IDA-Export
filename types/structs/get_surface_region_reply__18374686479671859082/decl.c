struct get_surface_region_reply
{
reply_header __header;
rectangle_t visible_rect;
data_size_t total_size;
char __pad_28[4];
};
