struct __declspec(align(8)) StorageBaseImpl
{
IStorage_0 IStorage_iface;
IPropertySetStorage_0 IPropertySetStorage_iface;
IDirectWriterLock_0 IDirectWriterLock_iface;
LONG ref;
list strmHead;
list storageHead;
BOOL reverted;
DirRef storageDirEntry;
const StorageBaseImplVtbl_0 *baseVtbl;
DWORD openFlags;
DWORD stateBits;
BOOL create;
StorageBaseImpl_0 *transactedChild;
swmr_mode lockingrole;
};
