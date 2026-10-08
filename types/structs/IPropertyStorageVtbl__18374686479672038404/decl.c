struct IPropertyStorageVtbl
{
HRESULT_0 (*QueryInterface)(IPropertyStorage_0 *, const IID *const, void **);
ULONG (*AddRef)(IPropertyStorage_0 *);
ULONG (*Release)(IPropertyStorage_0 *);
HRESULT_0 (*ReadMultiple)(IPropertyStorage_0 *, ULONG, const PROPSPEC *, PROPVARIANT *);
HRESULT_0 (*WriteMultiple)(IPropertyStorage_0 *, ULONG, const PROPSPEC *, const PROPVARIANT *, PROPID);
HRESULT_0 (*DeleteMultiple)(IPropertyStorage_0 *, ULONG, const PROPSPEC *);
HRESULT_0 (*ReadPropertyNames)(IPropertyStorage_0 *, ULONG, const PROPID *, LPOLESTR *);
HRESULT_0 (*WritePropertyNames)(IPropertyStorage_0 *, ULONG, const PROPID *, const LPOLESTR *);
HRESULT_0 (*DeletePropertyNames)(IPropertyStorage_0 *, ULONG, const PROPID *);
HRESULT_0 (*Commit)(IPropertyStorage_0 *, DWORD);
HRESULT_0 (*Revert)(IPropertyStorage_0 *);
HRESULT_0 (*Enum)(IPropertyStorage_0 *, IEnumSTATPROPSTG_0 **);
HRESULT_0 (*SetTimes)(IPropertyStorage_0 *, const FILETIME *, const FILETIME *, const FILETIME *);
HRESULT_0 (*SetClass)(IPropertyStorage_0 *, const CLSID *const);
HRESULT_0 (*Stat)(IPropertyStorage_0 *, STATPROPSETSTG *);
};
