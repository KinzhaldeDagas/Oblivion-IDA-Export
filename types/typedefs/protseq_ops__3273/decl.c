struct protseq_ops
{
const char *name __offset(OFF64|AUTO);
RpcServerProtseq *(*alloc)(void) __offset(OFF64|AUTO);
void (*signal_state_changed)(RpcServerProtseq *) __offset(OFF64|AUTO);
void *(*get_wait_array)(RpcServerProtseq *, void *, unsigned int *) __offset(OFF64|AUTO);
void (*free_wait_array)(RpcServerProtseq *, void *) __offset(OFF64|AUTO);
int (*wait_for_new_connection)(RpcServerProtseq *, unsigned int, void *) __offset(OFF64|AUTO);
RPC_STATUS (*open_endpoint)(RpcServerProtseq *, const char *) __offset(OFF64|AUTO);
};
