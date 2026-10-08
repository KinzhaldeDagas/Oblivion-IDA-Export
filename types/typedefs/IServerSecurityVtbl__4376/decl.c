struct IServerSecurityVtbl
{
HRESULT_0 (*QueryInterface)(IServerSecurity_0 *, const IID *const, void **);
ULONG (*AddRef)(IServerSecurity_0 *);
ULONG (*Release)(IServerSecurity_0 *);
HRESULT_0 (*QueryBlanket)(IServerSecurity_0 *, DWORD *, DWORD *, OLECHAR **, DWORD *, DWORD *, void **, DWORD *);
HRESULT_0 (*ImpersonateClient)(IServerSecurity_0 *);
HRESULT_0 (*RevertToSelf)(IServerSecurity_0 *);
BOOL (*IsImpersonating)(IServerSecurity_0 *);
};
