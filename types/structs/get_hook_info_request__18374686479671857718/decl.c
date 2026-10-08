struct get_hook_info_request
{
request_header __header;
user_handle_t handle;
int get_next;
int event;
user_handle_t window;
int object_id;
int child_id;
char __pad_36[4];
};
