struct DataCache
{
IUnknown_0 IUnknown_inner;
IDataObject_0 IDataObject_iface;
IPersistStorage_0 IPersistStorage_iface;
IViewObject2_0 IViewObject2_iface;
IOleCache2_0 IOleCache2_iface;
IOleCacheControl_0 IOleCacheControl_iface;
IAdviseSink_0 IAdviseSink_iface;
LONG ref;
IUnknown_0 *outer_unk;
DWORD sinkAspects;
DWORD sinkAdviseFlag;
IAdviseSink_0 *sinkInterface;
CLSID clsid;
BOOL clsid_static;
IStorage_0 *presentationStorage;
list cache_list;
DWORD last_cache_id;
BOOL dirty;
IDataObject_0 *running_object;
};
