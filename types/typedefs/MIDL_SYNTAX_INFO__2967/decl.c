struct _MIDL_SYNTAX_INFO
{
RPC_SYNTAX_IDENTIFIER TransferSyntax;
RPC_DISPATCH_TABLE *DispatchTable;
PFORMAT_STRING ProcString;
const unsigned __int16 *FmtStringOffset;
PFORMAT_STRING TypeString;
const void *aUserMarshalQuadruple;
ULONG_PTR pReserved1;
ULONG_PTR pReserved2;
};
