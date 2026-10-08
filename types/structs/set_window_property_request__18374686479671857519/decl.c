struct set_window_property_request
{
request_header __header;
user_handle_t window;
lparam_t data;
atom_t atom;
char __pad_28[4];
};
