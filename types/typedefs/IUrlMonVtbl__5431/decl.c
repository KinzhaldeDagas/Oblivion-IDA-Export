struct IUrlMonVtbl
{
HRESULT_0 (*QueryInterface)(IUrlMon_0 *, const IID *, void **);
ULONG (*AddRef)(IUrlMon_0 *);
ULONG (*Release)(IUrlMon_0 *);
HRESULT_0 (*AsyncGetClassBits)(IUrlMon_0 *, const CLSID *, LPCWSTR, LPCWSTR, DWORD, DWORD, LPCWSTR, IBindCtx_0 *, DWORD, const IID *, DWORD);
};
