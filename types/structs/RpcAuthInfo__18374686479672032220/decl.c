struct _RpcAuthInfo
{
LONG refs;
ULONG AuthnLevel;
ULONG AuthnSvc;
__declspec(align(8)) CredHandle cred;
TimeStamp exp;
ULONG cbMaxToken;
RPC_AUTH_IDENTITY_HANDLE *identity;
SEC_WINNT_AUTH_IDENTITY_W *nt_identity;
LPWSTR server_principal_name;
};
