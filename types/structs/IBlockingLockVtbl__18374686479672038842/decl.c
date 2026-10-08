struct IBlockingLockVtbl
{
HRESULT_0 (*QueryInterface)(IBlockingLock_0 *, const IID *, void **);
ULONG (*AddRef)(IBlockingLock_0 *);
ULONG (*Release)(IBlockingLock_0 *);
HRESULT_0 (*Lock)(IBlockingLock_0 *, DWORD);
HRESULT_0 (*Unlock)(IBlockingLock_0 *);
};
