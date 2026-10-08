struct IEnumSTATSTGVtbl
{
HRESULT_0 (*QueryInterface)(IEnumSTATSTG_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumSTATSTG_0 *);
ULONG (*Release)(IEnumSTATSTG_0 *);
HRESULT_0 (*Next)(IEnumSTATSTG_0 *, ULONG, STATSTG *, ULONG *);
HRESULT_0 (*Skip)(IEnumSTATSTG_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumSTATSTG_0 *);
HRESULT_0 (*Clone)(IEnumSTATSTG_0 *, IEnumSTATSTG_0 **);
};
