struct unload_registry_request
{
request_header __header;
obj_handle_t parent;
unsigned int attributes;
char __pad_20[4];
};
