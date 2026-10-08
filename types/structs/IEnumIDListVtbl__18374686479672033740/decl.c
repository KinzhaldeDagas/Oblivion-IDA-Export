struct IEnumIDListVtbl
{
HRESULT_0 (*QueryInterface)(IEnumIDList_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumIDList_0 *);
ULONG (*Release)(IEnumIDList_0 *);
HRESULT_0 (*Next)(IEnumIDList_0 *, ULONG, LPITEMIDLIST *, ULONG *);
HRESULT_0 (*Skip)(IEnumIDList_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumIDList_0 *);
HRESULT_0 (*Clone)(IEnumIDList_0 *, IEnumIDList_0 **);
};
