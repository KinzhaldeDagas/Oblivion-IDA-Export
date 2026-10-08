struct save_registry_request
{
request_header __header;
obj_handle_t hkey;
obj_handle_t file;
char __pad_20[4];
};
