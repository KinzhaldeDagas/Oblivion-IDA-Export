struct _RpcServerProtseq
{
const protseq_ops *ops;
list entry;
LPSTR Protseq;
UINT MaxCalls;
list listeners;
list connections;
CRITICAL_SECTION cs;
HANDLE server_thread;
HANDLE mgr_mutex;
HANDLE server_ready_event;
};
