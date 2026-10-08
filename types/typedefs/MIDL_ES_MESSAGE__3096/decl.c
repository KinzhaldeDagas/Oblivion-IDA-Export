struct __declspec(align(8)) _MIDL_ES_MESSAGE
{
MIDL_STUB_MESSAGE StubMsg;
MIDL_ES_CODE Operation;
void *UserState;
unsigned __int32 MesVersion : 8;
unsigned __int32 HandleStyle : 8;
unsigned __int32 HandleFlags : 8;
unsigned __int32 Reserve : 8;
MIDL_ES_ALLOC Alloc;
MIDL_ES_WRITE Write;
MIDL_ES_READ Read;
unsigned __int8 *Buffer;
ULONG BufferSize;
unsigned __int8 **pDynBuffer;
ULONG *pEncodedSize;
RPC_SYNTAX_IDENTIFIER InterfaceId;
ULONG ProcNumber;
ULONG AlienDataRep;
ULONG IncrDataSize;
ULONG ByteCount;
};
