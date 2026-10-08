struct create_esync_request
{
request_header __header;
unsigned int access;
int initval;
int type;
int max;
char __pad_28[4];
};
