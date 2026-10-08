struct IPersistPropertyBagVtbl
{
HRESULT_0 (*QueryInterface)(IPersistPropertyBag_0 *, const IID *const, void **);
ULONG (*AddRef)(IPersistPropertyBag_0 *);
ULONG (*Release)(IPersistPropertyBag_0 *);
HRESULT_0 (*GetClassID)(IPersistPropertyBag_0 *, CLSID *);
HRESULT_0 (*InitNew)(IPersistPropertyBag_0 *);
HRESULT_0 (*Load)(IPersistPropertyBag_0 *, IPropertyBag_0 *, IErrorLog_0 *);
HRESULT_0 (*Save)(IPersistPropertyBag_0 *, IPropertyBag_0 *, BOOL, BOOL);
};
