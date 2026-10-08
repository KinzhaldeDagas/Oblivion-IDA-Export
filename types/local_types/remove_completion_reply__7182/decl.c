struct remove_completion_reply
{
reply_header __header;
apc_param_t ckey;
apc_param_t cvalue;
apc_param_t information;
unsigned int status;
char __pad_36[4];
};
