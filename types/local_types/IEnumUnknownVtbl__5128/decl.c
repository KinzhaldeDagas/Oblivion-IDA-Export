struct IEnumUnknownVtbl
{
HRESULT_0 (*QueryInterface)(IEnumUnknown_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumUnknown_0 *);
ULONG (*Release)(IEnumUnknown_0 *);
HRESULT_0 (*Next)(IEnumUnknown_0 *, ULONG, IUnknown_0 **, ULONG *);
HRESULT_0 (*Skip)(IEnumUnknown_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumUnknown_0 *);
HRESULT_0 (*Clone)(IEnumUnknown_0 *, IEnumUnknown_0 **);
};
