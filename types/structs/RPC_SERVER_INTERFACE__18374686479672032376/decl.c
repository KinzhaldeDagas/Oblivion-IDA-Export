struct __declspec(align(8)) _RPC_SERVER_INTERFACE
{
unsigned int Length;
RPC_SYNTAX_IDENTIFIER InterfaceId;
RPC_SYNTAX_IDENTIFIER TransferSyntax;
PRPC_DISPATCH_TABLE DispatchTable;
unsigned int RpcProtseqEndpointCount;
PRPC_PROTSEQ_ENDPOINT RpcProtseqEndpoint;
void *DefaultManagerEpv;
const void *InterpreterInfo;
unsigned int Flags;
};
