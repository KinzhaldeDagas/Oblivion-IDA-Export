struct IEnumStringVtbl
{
HRESULT_0 (*QueryInterface)(IEnumString_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumString_0 *);
ULONG (*Release)(IEnumString_0 *);
HRESULT_0 (*Next)(IEnumString_0 *, ULONG, LPOLESTR *, ULONG *);
HRESULT_0 (*Skip)(IEnumString_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumString_0 *);
HRESULT_0 (*Clone)(IEnumString_0 *, IEnumString_0 **);
};
