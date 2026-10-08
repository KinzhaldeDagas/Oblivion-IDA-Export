struct max_sid
{
BYTE Revision;
BYTE SubAuthorityCount;
SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
DWORD SubAuthority[15];
};
