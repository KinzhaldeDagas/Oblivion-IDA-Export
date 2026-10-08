struct IPropertyStoreVtbl
{
HRESULT_0 (*QueryInterface)(IPropertyStore_0 *, const IID *const, void **);
ULONG (*AddRef)(IPropertyStore_0 *);
ULONG (*Release)(IPropertyStore_0 *);
HRESULT_0 (*GetCount)(IPropertyStore_0 *, DWORD *);
HRESULT_0 (*GetAt)(IPropertyStore_0 *, DWORD, PROPERTYKEY *);
HRESULT_0 (*GetValue)(IPropertyStore_0 *, const PROPERTYKEY *const, PROPVARIANT *);
HRESULT_0 (*SetValue)(IPropertyStore_0 *, const PROPERTYKEY *const, const PROPVARIANT *const);
HRESULT_0 (*Commit)(IPropertyStore_0 *);
};
