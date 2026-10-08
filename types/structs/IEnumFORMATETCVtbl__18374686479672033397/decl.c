struct IEnumFORMATETCVtbl
{
HRESULT_0 (*QueryInterface)(IEnumFORMATETC_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumFORMATETC_0 *);
ULONG (*Release)(IEnumFORMATETC_0 *);
HRESULT_0 (*Next)(IEnumFORMATETC_0 *, ULONG, FORMATETC *, ULONG *);
HRESULT_0 (*Skip)(IEnumFORMATETC_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumFORMATETC_0 *);
HRESULT_0 (*Clone)(IEnumFORMATETC_0 *, IEnumFORMATETC_0 **);
};
