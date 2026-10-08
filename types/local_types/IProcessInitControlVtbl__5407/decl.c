struct IProcessInitControlVtbl
{
HRESULT_0 (*QueryInterface)(IProcessInitControl_0 *, const IID *, void **);
ULONG (*AddRef)(IProcessInitControl_0 *);
ULONG (*Release)(IProcessInitControl_0 *);
HRESULT_0 (*ResetInitializerTimeout)(IProcessInitControl_0 *, DWORD);
};
