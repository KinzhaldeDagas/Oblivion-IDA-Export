struct ClientRpcChannelBuffer
{
RpcChannelBuffer super;
RPC_BINDING_HANDLE bind;
OXID oxid;
DWORD server_pid;
HANDLE event;
IID iid;
};
