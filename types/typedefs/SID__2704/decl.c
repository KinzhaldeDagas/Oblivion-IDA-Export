struct _SID
{
BYTE Revision;
BYTE SubAuthorityCount;
SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
DWORD SubAuthority[1];
};
