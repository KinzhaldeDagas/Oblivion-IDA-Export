struct _CREDENTIAL_TARGET_INFORMATIONW
{
LPWSTR TargetName;
LPWSTR NetbiosServerName;
LPWSTR DnsServerName;
LPWSTR NetbiosDomainName;
LPWSTR DnsDomainName;
LPWSTR DnsTreeName;
LPWSTR PackageName;
DWORD Flags;
DWORD CredTypeCount;
LPDWORD CredTypes;
};
