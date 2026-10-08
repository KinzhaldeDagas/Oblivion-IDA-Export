struct create_window_request
{
request_header __header;
user_handle_t parent;
user_handle_t owner;
atom_t atom;
mod_handle_t instance;
int dpi;
int awareness;
};
