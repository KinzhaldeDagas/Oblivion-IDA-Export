struct set_cursor_request
{
request_header __header;
unsigned int flags;
user_handle_t handle;
int show_count;
int x;
int y;
rectangle_t clip;
unsigned int clip_msg;
char __pad_52[4];
};
