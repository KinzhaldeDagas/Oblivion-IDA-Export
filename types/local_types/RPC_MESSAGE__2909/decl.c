struct __declspec(align(8)) _RPC_MESSAGE
{
RPC_BINDING_HANDLE Handle;
ULONG DataRepresentation;
void *Buffer;
unsigned int BufferLength;
unsigned int ProcNum;
PRPC_SYNTAX_IDENTIFIER TransferSyntax;
void *RpcInterfaceInformation;
void *ReservedForRuntime;
void *ManagerEpv;
void *ImportContext;
ULONG RpcFlags;
};
