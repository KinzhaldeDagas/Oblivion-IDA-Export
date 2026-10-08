struct _MIDL_SERVER_INFO_
{
PMIDL_STUB_DESC pStubDesc;
const SERVER_ROUTINE *DispatchTable;
PFORMAT_STRING ProcString;
const unsigned __int16 *FmtStringOffset;
const STUB_THUNK *ThunkTable;
PRPC_SYNTAX_IDENTIFIER pTransferSyntax;
ULONG_PTR nCount;
PMIDL_SYNTAX_INFO pSyntaxInfo;
};
