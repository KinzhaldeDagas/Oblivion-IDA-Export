struct user_apc_t
{
apc_type type;
int __pad;
client_ptr_t func;
apc_param_t args[3];
};
