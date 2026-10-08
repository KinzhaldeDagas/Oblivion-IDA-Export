struct _SEC_WINNT_AUTH_IDENTITY_W
{
unsigned __int16 *User;
ULONG UserLength;
unsigned __int16 *Domain;
ULONG DomainLength;
unsigned __int16 *Password;
ULONG PasswordLength;
ULONG Flags;
};
