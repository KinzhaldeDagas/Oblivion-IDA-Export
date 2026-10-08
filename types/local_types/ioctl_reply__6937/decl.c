struct ioctl_reply
{
reply_header __header;
obj_handle_t wait;
unsigned int options;
};
