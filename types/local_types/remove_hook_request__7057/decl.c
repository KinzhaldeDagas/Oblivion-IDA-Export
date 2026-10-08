struct remove_hook_request
{
request_header __header;
user_handle_t handle;
client_ptr_t proc;
int id;
char __pad_28[4];
};
