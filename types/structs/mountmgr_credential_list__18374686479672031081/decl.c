struct mountmgr_credential_list
{
ULONG size;
ULONG count;
ULONG filter_offset;
ULONG filter_size;
mountmgr_credential creds[1];
};
