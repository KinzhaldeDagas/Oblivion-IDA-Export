struct StgStreamImpl
{
IStream_0 IStream_iface;
LONG ref;
list StrmListEntry;
StorageBaseImpl_0 *parentStorage;
DWORD grfMode;
DirRef dirEntry;
ULARGE_INTEGER currentPosition;
};
