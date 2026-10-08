struct get_window_children_from_point_request
{
request_header __header;
user_handle_t parent;
int x;
int y;
int dpi;
char __pad_28[4];
};
