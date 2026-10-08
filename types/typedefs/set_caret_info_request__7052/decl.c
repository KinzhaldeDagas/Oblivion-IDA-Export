struct set_caret_info_request
{
request_header __header;
unsigned int flags;
user_handle_t handle;
int x;
int y;
int hide;
int state;
char __pad_36[4];
};
