struct get_window_property_request
{
request_header __header;
user_handle_t window;
atom_t atom;
char __pad_20[4];
};
