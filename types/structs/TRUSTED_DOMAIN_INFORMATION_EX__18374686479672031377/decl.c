struct __declspec(align(8)) _TRUSTED_DOMAIN_INFORMATION_EX
{
LSA_UNICODE_STRING Name;
LSA_UNICODE_STRING FlatName;
PSID Sid;
ULONG TrustDirection;
ULONG TrustType;
ULONG TrustAttributes;
};
