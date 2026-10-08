struct _SEC_WINNT_AUTH_IDENTITY_A
{
unsigned __int8 *User;
ULONG UserLength;
unsigned __int8 *Domain;
ULONG DomainLength;
unsigned __int8 *Password;
ULONG PasswordLength;
ULONG Flags;
};
