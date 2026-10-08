struct ISequentialStreamVtbl
{
HRESULT_0 (*QueryInterface)(ISequentialStream_0 *, const IID *const, void **);
ULONG (*AddRef)(ISequentialStream_0 *);
ULONG (*Release)(ISequentialStream_0 *);
HRESULT_0 (*Read)(ISequentialStream_0 *, void *, ULONG, ULONG *);
HRESULT_0 (*Write)(ISequentialStream_0 *, const void *, ULONG, ULONG *);
};
