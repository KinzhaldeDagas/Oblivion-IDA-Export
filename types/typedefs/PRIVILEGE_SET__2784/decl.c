struct _PRIVILEGE_SET
{
DWORD PrivilegeCount;
DWORD Control;
LUID_AND_ATTRIBUTES Privilege[1];
};
