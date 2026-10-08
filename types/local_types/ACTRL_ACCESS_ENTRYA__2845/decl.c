struct _ACTRL_ACCESS_ENTRYA
{
TRUSTEE_A Trustee;
ULONG fAccessFlags;
ACCESS_RIGHTS Access;
ACCESS_RIGHTS ProvSpecificAccess;
INHERIT_FLAGS Inheritance;
LPSTR lpInheritProperty;
};
