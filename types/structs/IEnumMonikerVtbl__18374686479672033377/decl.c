struct IEnumMonikerVtbl
{
HRESULT_0 (*QueryInterface)(IEnumMoniker_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumMoniker_0 *);
ULONG (*Release)(IEnumMoniker_0 *);
HRESULT_0 (*Next)(IEnumMoniker_0 *, ULONG, IMoniker_0 **, ULONG *);
HRESULT_0 (*Skip)(IEnumMoniker_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumMoniker_0 *);
HRESULT_0 (*Clone)(IEnumMoniker_0 *, IEnumMoniker_0 **);
};
