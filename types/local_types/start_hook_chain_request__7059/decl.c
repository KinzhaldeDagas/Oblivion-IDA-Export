struct start_hook_chain_request
{
request_header __header;
int id;
int event;
user_handle_t window;
int object_id;
int child_id;
};
