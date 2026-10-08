struct get_window_children_request
{
request_header __header;
obj_handle_t desktop;
user_handle_t parent;
atom_t atom;
thread_id_t tid;
char __pad_28[4];
};
