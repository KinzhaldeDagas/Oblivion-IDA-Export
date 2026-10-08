struct ILockBytesVtbl
{
HRESULT_0 (*QueryInterface)(ILockBytes_0 *, const IID *const, void **);
ULONG (*AddRef)(ILockBytes_0 *);
ULONG (*Release)(ILockBytes_0 *);
HRESULT_0 (*ReadAt)(ILockBytes_0 *, ULARGE_INTEGER, void *, ULONG, ULONG *);
HRESULT_0 (*WriteAt)(ILockBytes_0 *, ULARGE_INTEGER, const void *, ULONG, ULONG *);
HRESULT_0 (*Flush)(ILockBytes_0 *);
HRESULT_0 (*SetSize)(ILockBytes_0 *, ULARGE_INTEGER);
HRESULT_0 (*LockRegion)(ILockBytes_0 *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
HRESULT_0 (*UnlockRegion)(ILockBytes_0 *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
HRESULT_0 (*Stat)(ILockBytes_0 *, STATSTG_0 *, DWORD);
};
