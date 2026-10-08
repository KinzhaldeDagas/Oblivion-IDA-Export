struct IInputObjectSiteVtbl
{
HRESULT_0 (*QueryInterface)(IInputObjectSite_0 *, const IID *const, void **);
ULONG (*AddRef)(IInputObjectSite_0 *);
ULONG (*Release)(IInputObjectSite_0 *);
HRESULT_0 (*OnFocusChangeIS)(IInputObjectSite_0 *, LPUNKNOWN, BOOL);
};
