struct create_named_pipe_request
{
request_header __header;
unsigned int access;
unsigned int options;
unsigned int sharing;
unsigned int maxinstances;
unsigned int outsize;
unsigned int insize;
char __pad_36[4];
timeout_t timeout;
unsigned int flags;
char __pad_52[4];
};
