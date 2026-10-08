struct __declspec(align(8)) DefaultHandler
{
IOleObject_0 IOleObject_iface;
IUnknown_0 IUnknown_iface;
IDataObject_0 IDataObject_iface;
IRunnableObject_0 IRunnableObject_iface;
IAdviseSink_0 IAdviseSink_iface;
IPersistStorage_0 IPersistStorage_iface;
LONG ref;
IUnknown_0 *outerUnknown;
CLSID clsid;
IUnknown_0 *dataCache;
IPersistStorage_0 *dataCache_PersistStg;
IOleClientSite_0 *clientSite;
IOleAdviseHolder_0 *oleAdviseHolder;
IDataAdviseHolder_0 *dataAdviseHolder;
LPWSTR containerApp;
LPWSTR containerObj;
IOleObject_0 *pOleDelegate;
IPersistStorage_0 *pPSDelegate;
IDataObject_0 *pDataDelegate;
object_state object_state;
ULONG in_call;
DWORD dwAdvConn;
IStorage_0 *storage;
storage_state storage_state;
IClassFactory_0 *pCFObject;
BOOL inproc_server;
};
