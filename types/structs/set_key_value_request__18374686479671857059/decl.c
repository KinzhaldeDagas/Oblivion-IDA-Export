struct set_key_value_request
{
request_header __header;
obj_handle_t hkey;
int type;
data_size_t namelen;
};
