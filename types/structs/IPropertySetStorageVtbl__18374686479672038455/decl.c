struct IPropertySetStorageVtbl
{
HRESULT_0 (*QueryInterface)(IPropertySetStorage_0 *, const IID *const, void **);
ULONG (*AddRef)(IPropertySetStorage_0 *);
ULONG (*Release)(IPropertySetStorage_0 *);
HRESULT_0 (*Create)(IPropertySetStorage_0 *, const FMTID *const, const CLSID *, DWORD, DWORD, IPropertyStorage_0 **);
HRESULT_0 (*Open)(IPropertySetStorage_0 *, const FMTID *const, DWORD, IPropertyStorage_0 **);
HRESULT_0 (*Delete)(IPropertySetStorage_0 *, const FMTID *const);
HRESULT_0 (*Enum)(IPropertySetStorage_0 *, IEnumSTATPROPSETSTG_0 **);
};
