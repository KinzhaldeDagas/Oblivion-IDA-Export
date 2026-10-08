struct IStreamVtbl
{
HRESULT_0 (*QueryInterface)(IStream_0 *, const IID *const, void **);
ULONG (*AddRef)(IStream_0 *);
ULONG (*Release)(IStream_0 *);
HRESULT_0 (*Read)(IStream_0 *, void *, ULONG, ULONG *);
HRESULT_0 (*Write)(IStream_0 *, const void *, ULONG, ULONG *);
HRESULT_0 (*Seek)(IStream_0 *, LARGE_INTEGER_1, DWORD, ULARGE_INTEGER_0 *);
HRESULT_0 (*SetSize)(IStream_0 *, ULARGE_INTEGER_0);
HRESULT_0 (*CopyTo)(IStream_0 *, IStream_0 *, ULARGE_INTEGER_0, ULARGE_INTEGER_0 *, ULARGE_INTEGER_0 *);
HRESULT_0 (*Commit)(IStream_0 *, DWORD);
HRESULT_0 (*Revert)(IStream_0 *);
HRESULT_0 (*LockRegion)(IStream_0 *, ULARGE_INTEGER_0, ULARGE_INTEGER_0, DWORD);
HRESULT_0 (*UnlockRegion)(IStream_0 *, ULARGE_INTEGER_0, ULARGE_INTEGER_0, DWORD);
HRESULT_0 (*Stat)(IStream_0 *, STATSTG *, DWORD);
HRESULT_0 (*Clone)(IStream_0 *, IStream_0 **);
};
