struct async_call_data
{
MIDL_STUB_MESSAGE *pStubMsg;
const NDR_PROC_HEADER *pProcHeader;
PFORMAT_STRING pHandleFormat;
PFORMAT_STRING pParamFormat;
RPC_BINDING_HANDLE hBinding;
unsigned __int16 stack_size;
unsigned int number_of_params;
LONG_PTR *retval_ptr;
ULONG_PTR NdrCorrCache[256];
};
