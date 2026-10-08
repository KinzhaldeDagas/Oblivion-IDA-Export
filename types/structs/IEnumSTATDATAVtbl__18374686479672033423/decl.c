struct IEnumSTATDATAVtbl
{
HRESULT_0 (*QueryInterface)(IEnumSTATDATA_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumSTATDATA_0 *);
ULONG (*Release)(IEnumSTATDATA_0 *);
HRESULT_0 (*Next)(IEnumSTATDATA_0 *, ULONG, STATDATA *, ULONG *);
HRESULT_0 (*Skip)(IEnumSTATDATA_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumSTATDATA_0 *);
HRESULT_0 (*Clone)(IEnumSTATDATA_0 *, IEnumSTATDATA_0 **);
};
