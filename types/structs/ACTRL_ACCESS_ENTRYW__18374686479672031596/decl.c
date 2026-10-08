struct _ACTRL_ACCESS_ENTRYW
{
TRUSTEE_W Trustee;
ULONG fAccessFlags;
ACCESS_RIGHTS Access;
ACCESS_RIGHTS ProvSpecificAccess;
INHERIT_FLAGS Inheritance;
LPWSTR lpInheritProperty;
};
