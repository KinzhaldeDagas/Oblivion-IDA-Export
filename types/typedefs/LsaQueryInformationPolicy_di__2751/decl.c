struct LsaQueryInformationPolicy::di
{
POLICY_ACCOUNT_DOMAIN_INFO info;
SID sid;
DWORD padding[3];
WCHAR_0 domain[16];
};
