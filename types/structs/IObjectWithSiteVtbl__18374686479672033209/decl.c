struct IObjectWithSiteVtbl
{
HRESULT_0 (*QueryInterface)(IObjectWithSite_0 *, const IID *const, void **);
ULONG (*AddRef)(IObjectWithSite_0 *);
ULONG (*Release)(IObjectWithSite_0 *);
HRESULT_0 (*SetSite)(IObjectWithSite_0 *, IUnknown_0 *);
HRESULT_0 (*GetSite)(IObjectWithSite_0 *, const IID *const, PVOID *);
};
