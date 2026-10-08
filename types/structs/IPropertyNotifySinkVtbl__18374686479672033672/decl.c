struct IPropertyNotifySinkVtbl
{
HRESULT_0 (*QueryInterface)(IPropertyNotifySink_0 *, const IID *const, void **);
ULONG (*AddRef)(IPropertyNotifySink_0 *);
ULONG (*Release)(IPropertyNotifySink_0 *);
HRESULT_0 (*OnChanged)(IPropertyNotifySink_0 *, DISPID);
HRESULT_0 (*OnRequestEdit)(IPropertyNotifySink_0 *, DISPID);
};
