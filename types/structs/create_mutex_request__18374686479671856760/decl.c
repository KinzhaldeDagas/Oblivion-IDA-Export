struct create_mutex_request
{
request_header __header;
unsigned int access;
int owned;
char __pad_20[4];
};
