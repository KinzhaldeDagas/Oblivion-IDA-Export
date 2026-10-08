struct StorageBaseImplVtbl
{
void (*Destroy)(StorageBaseImpl_0 *);
void (*Invalidate)(StorageBaseImpl_0 *);
HRESULT_0 (*Flush)(StorageBaseImpl_0 *);
HRESULT_0 (*GetFilename)(StorageBaseImpl_0 *, LPWSTR *);
HRESULT_0 (*CreateDirEntry)(StorageBaseImpl_0 *, const DirEntry_0 *, DirRef *);
HRESULT_0 (*WriteDirEntry)(StorageBaseImpl_0 *, DirRef, const DirEntry_0 *);
HRESULT_0 (*ReadDirEntry)(StorageBaseImpl_0 *, DirRef, DirEntry_0 *);
HRESULT_0 (*DestroyDirEntry)(StorageBaseImpl_0 *, DirRef);
HRESULT_0 (*StreamReadAt)(StorageBaseImpl_0 *, DirRef, ULARGE_INTEGER, ULONG, void *, ULONG *);
HRESULT_0 (*StreamWriteAt)(StorageBaseImpl_0 *, DirRef, ULARGE_INTEGER, ULONG, const void *, ULONG *);
HRESULT_0 (*StreamSetSize)(StorageBaseImpl_0 *, DirRef, ULARGE_INTEGER);
HRESULT_0 (*StreamLink)(StorageBaseImpl_0 *, DirRef, DirRef);
HRESULT_0 (*GetTransactionSig)(StorageBaseImpl_0 *, ULONG *, BOOL);
HRESULT_0 (*SetTransactionSig)(StorageBaseImpl_0 *, ULONG);
HRESULT_0 (*LockTransaction)(StorageBaseImpl_0 *, BOOL);
HRESULT_0 (*UnlockTransaction)(StorageBaseImpl_0 *, BOOL);
};
