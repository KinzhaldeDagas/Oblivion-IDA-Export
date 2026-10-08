struct IFillLockBytesVtbl
{
HRESULT_0 (*QueryInterface)(IFillLockBytes_0 *, const IID *const, void **);
ULONG (*AddRef)(IFillLockBytes_0 *);
ULONG (*Release)(IFillLockBytes_0 *);
HRESULT_0 (*FillAppend)(IFillLockBytes_0 *, const void *, ULONG, ULONG *);
HRESULT_0 (*FillAt)(IFillLockBytes_0 *, ULARGE_INTEGER, const void *, ULONG, ULONG *);
HRESULT_0 (*SetFillSize)(IFillLockBytes_0 *, ULARGE_INTEGER);
HRESULT_0 (*Terminate)(IFillLockBytes_0 *, BOOL);
};
