struct __declspec(align(8)) _RpcServerInterface
{
list entry;
RPC_SERVER_INTERFACE *If;
UUID MgrTypeUuid;
void *MgrEpv;
UINT Flags;
UINT MaxCalls;
UINT MaxRpcSize;
RPC_IF_CALLBACK_FN *IfCallbackFn;
LONG CurrentCalls;
HANDLE CallsCompletedEvent;
BOOL Delete;
};
