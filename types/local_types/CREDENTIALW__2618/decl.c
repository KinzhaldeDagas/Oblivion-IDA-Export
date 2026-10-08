struct _CREDENTIALW
{
DWORD Flags;
DWORD Type;
LPWSTR TargetName;
LPWSTR Comment;
FILETIME LastWritten;
DWORD CredentialBlobSize;
LPBYTE_0 CredentialBlob;
DWORD Persist;
DWORD AttributeCount;
PCREDENTIAL_ATTRIBUTEW Attributes;
LPWSTR TargetAlias;
LPWSTR UserName;
};
