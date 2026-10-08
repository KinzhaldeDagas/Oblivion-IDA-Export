struct IClientSecurityVtbl
{
HRESULT_0 (*QueryInterface)(IClientSecurity_0 *, const IID *const, void **);
ULONG (*AddRef)(IClientSecurity_0 *);
ULONG (*Release)(IClientSecurity_0 *);
HRESULT_0 (*QueryBlanket)(IClientSecurity_0 *, IUnknown_0 *, DWORD *, DWORD *, OLECHAR **, DWORD *, DWORD *, void **, DWORD *);
HRESULT_0 (*SetBlanket)(IClientSecurity_0 *, IUnknown_0 *, DWORD, DWORD, OLECHAR *, DWORD, DWORD, void *, DWORD);
HRESULT_0 (*CopyProxy)(IClientSecurity_0 *, IUnknown_0 *, IUnknown_0 **);
};
