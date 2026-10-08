struct create_window_reply
{
reply_header __header;
user_handle_t handle;
user_handle_t parent;
user_handle_t owner;
int extra;
client_ptr_t class_ptr;
int dpi;
int awareness;
};
