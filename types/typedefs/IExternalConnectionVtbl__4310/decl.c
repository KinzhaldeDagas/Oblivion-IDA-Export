struct IExternalConnectionVtbl
{
HRESULT_0 (*QueryInterface)(IExternalConnection_0 *, const IID *const, void **);
ULONG (*AddRef)(IExternalConnection_0 *);
ULONG (*Release)(IExternalConnection_0 *);
DWORD (*AddConnection)(IExternalConnection_0 *, DWORD, DWORD);
DWORD (*ReleaseConnection)(IExternalConnection_0 *, DWORD, DWORD, BOOL);
};
