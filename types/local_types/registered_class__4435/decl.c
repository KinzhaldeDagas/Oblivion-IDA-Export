struct registered_class
{
list entry;
CLSID clsid;
OXID apartment_id;
IUnknown_0 *object;
DWORD clscontext;
DWORD flags;
unsigned int cookie;
unsigned int rpcss_cookie;
};
