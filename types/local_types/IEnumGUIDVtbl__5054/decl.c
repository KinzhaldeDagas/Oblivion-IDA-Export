struct IEnumGUIDVtbl
{
HRESULT_0 (*QueryInterface)(IEnumGUID_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumGUID_0 *);
ULONG (*Release)(IEnumGUID_0 *);
HRESULT_0 (*Next)(IEnumGUID_0 *, ULONG, GUID *, ULONG *);
HRESULT_0 (*Skip)(IEnumGUID_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumGUID_0 *);
HRESULT_0 (*Clone)(IEnumGUID_0 *, IEnumGUID_0 **);
};
