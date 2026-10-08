struct ISynchronizeVtbl
{
HRESULT_0 (*QueryInterface)(ISynchronize_0 *, const IID *const, void **);
ULONG (*AddRef)(ISynchronize_0 *);
ULONG (*Release)(ISynchronize_0 *);
HRESULT_0 (*Wait)(ISynchronize_0 *, DWORD, DWORD);
HRESULT_0 (*Signal)(ISynchronize_0 *);
HRESULT_0 (*Reset)(ISynchronize_0 *);
};
