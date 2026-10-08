struct __declspec(align(8)) _COAUTHINFO
{
DWORD dwAuthnSvc;
DWORD dwAuthzSvc;
LPWSTR pwszServerPrincName;
DWORD dwAuthnLevel;
DWORD dwImpersonationLevel;
COAUTHIDENTITY *pAuthIdentityData;
DWORD dwCapabilities;
};
