struct proxy_manager
{
IMultiQI_0 IMultiQI_iface;
IMarshal_0 IMarshal_iface;
IClientSecurity_0 IClientSecurity_iface;
apartment *parent;
list entry;
OXID oxid;
OXID_INFO oxid_info;
OID oid;
list interfaces;
LONG refs;
CRITICAL_SECTION cs;
ULONG sorflags;
IRemUnknown_0 *remunk;
HANDLE remoting_mutex;
MSHCTX dest_context;
void *dest_context_data;
};
