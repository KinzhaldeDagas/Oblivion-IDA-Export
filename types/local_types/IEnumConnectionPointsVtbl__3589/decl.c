struct IEnumConnectionPointsVtbl
{
HRESULT_0 (*QueryInterface)(IEnumConnectionPoints_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumConnectionPoints_0 *);
ULONG (*Release)(IEnumConnectionPoints_0 *);
HRESULT_0 (*Next)(IEnumConnectionPoints_0 *, ULONG, LPCONNECTIONPOINT *, ULONG *);
HRESULT_0 (*Skip)(IEnumConnectionPoints_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumConnectionPoints_0 *);
HRESULT_0 (*Clone)(IEnumConnectionPoints_0 *, IEnumConnectionPoints_0 **);
};
