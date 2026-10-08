struct typelib_stub
{
cstdstubbuffer_delegating_t stub;
IID iid;
MIDL_STUB_DESC stub_desc;
MIDL_SERVER_INFO server_info;
CInterfaceStubVtbl stub_vtbl;
unsigned __int16 *offset_table;
PRPC_STUB_FUNCTION *dispatch_table;
};
