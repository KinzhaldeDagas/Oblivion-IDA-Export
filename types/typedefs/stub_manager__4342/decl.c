struct stub_manager
{
list entry;
list ifstubs;
CRITICAL_SECTION lock;
apartment *apt;
ULONG extrefs;
ULONG refs;
ULONG weakrefs;
__declspec(align(8)) OID oid;
IUnknown_0 *object;
ULONG next_ipid;
OXID_INFO oxid_info;
IExternalConnection_0 *extern_conn;
ULONG norm_refs;
BOOL disconnected;
};
