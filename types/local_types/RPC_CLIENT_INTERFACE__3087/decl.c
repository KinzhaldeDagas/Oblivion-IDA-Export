struct __declspec(align(8)) _RPC_CLIENT_INTERFACE
{
unsigned int Length;
RPC_SYNTAX_IDENTIFIER InterfaceId;
RPC_SYNTAX_IDENTIFIER TransferSyntax;
PRPC_DISPATCH_TABLE DispatchTable;
unsigned int RpcProtseqEndpointCount;
PRPC_PROTSEQ_ENDPOINT RpcProtseqEndpoint;
ULONG_PTR Reserved;
const void *InterpreterInfo;
unsigned int Flags;
};
