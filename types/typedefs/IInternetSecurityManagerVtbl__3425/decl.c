struct IInternetSecurityManagerVtbl
{
HRESULT_0 (*QueryInterface)(IInternetSecurityManager_0 *, const IID *const, void **);
ULONG (*AddRef)(IInternetSecurityManager_0 *);
ULONG (*Release)(IInternetSecurityManager_0 *);
HRESULT_0 (*SetSecuritySite)(IInternetSecurityManager_0 *, IInternetSecurityMgrSite_0 *);
HRESULT_0 (*GetSecuritySite)(IInternetSecurityManager_0 *, IInternetSecurityMgrSite_0 **);
HRESULT_0 (*MapUrlToZone)(IInternetSecurityManager_0 *, LPCWSTR, DWORD *, DWORD);
HRESULT_0 (*GetSecurityId)(IInternetSecurityManager_0 *, LPCWSTR, BYTE *, DWORD *, DWORD_PTR);
HRESULT_0 (*ProcessUrlAction)(IInternetSecurityManager_0 *, LPCWSTR, DWORD, BYTE *, DWORD, BYTE *, DWORD, DWORD, DWORD);
HRESULT_0 (*QueryCustomPolicy)(IInternetSecurityManager_0 *, LPCWSTR, const GUID *const, BYTE **, DWORD *, BYTE *, DWORD, DWORD);
HRESULT_0 (*SetZoneMapping)(IInternetSecurityManager_0 *, DWORD, LPCWSTR, DWORD);
HRESULT_0 (*GetZoneMappings)(IInternetSecurityManager_0 *, DWORD, IEnumString_0 **, DWORD);
};
