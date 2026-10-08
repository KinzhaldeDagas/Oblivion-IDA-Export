struct _CREDENTIALA
{
DWORD Flags;
DWORD Type;
LPSTR TargetName;
LPSTR Comment;
FILETIME LastWritten;
DWORD CredentialBlobSize;
LPBYTE_0 CredentialBlob;
DWORD Persist;
DWORD AttributeCount;
PCREDENTIAL_ATTRIBUTEA Attributes;
LPSTR TargetAlias;
LPSTR UserName;
};
