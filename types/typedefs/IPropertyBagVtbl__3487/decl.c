struct IPropertyBagVtbl
{
HRESULT_0 (*QueryInterface)(IPropertyBag_0 *, const IID *const, void **);
ULONG (*AddRef)(IPropertyBag_0 *);
ULONG (*Release)(IPropertyBag_0 *);
HRESULT_0 (*Read)(IPropertyBag_0 *, LPCOLESTR, VARIANT *, IErrorLog_0 *);
HRESULT_0 (*Write)(IPropertyBag_0 *, LPCOLESTR, VARIANT *);
};
