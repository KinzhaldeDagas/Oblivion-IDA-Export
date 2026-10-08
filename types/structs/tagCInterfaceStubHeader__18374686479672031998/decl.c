struct tagCInterfaceStubHeader
{
const IID *piid;
const MIDL_SERVER_INFO *pServerInfo;
ULONG DispatchTableCount;
const PRPC_STUB_FUNCTION *pDispatchTable;
};
