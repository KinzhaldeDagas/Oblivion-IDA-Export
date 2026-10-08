struct IDirectWriterLockVtbl
{
HRESULT_0 (*QueryInterface)(IDirectWriterLock_0 *, const IID *const, void **);
ULONG (*AddRef)(IDirectWriterLock_0 *);
ULONG (*Release)(IDirectWriterLock_0 *);
HRESULT_0 (*WaitForWriteAccess)(IDirectWriterLock_0 *, DWORD);
HRESULT_0 (*ReleaseWriteAccess)(IDirectWriterLock_0 *);
HRESULT_0 (*HaveWriteAccess)(IDirectWriterLock_0 *);
};
