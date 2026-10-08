struct IDropSourceVtbl
{
HRESULT_0 (*QueryInterface)(IDropSource_0 *, const IID *const, void **);
ULONG (*AddRef)(IDropSource_0 *);
ULONG (*Release)(IDropSource_0 *);
HRESULT_0 (*QueryContinueDrag)(IDropSource_0 *, BOOL, DWORD);
HRESULT_0 (*GiveFeedback)(IDropSource_0 *, DWORD);
};
