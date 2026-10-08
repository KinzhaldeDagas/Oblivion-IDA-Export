struct get_handle_fd_reply
{
reply_header __header;
int type;
int cacheable;
unsigned int access;
unsigned int options;
};
