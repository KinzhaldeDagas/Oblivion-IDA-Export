struct set_registry_notification_request
{
request_header __header;
obj_handle_t hkey;
obj_handle_t event;
int subtree;
unsigned int filter;
char __pad_28[4];
};
