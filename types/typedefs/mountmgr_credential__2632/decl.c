struct mountmgr_credential
{
ULONG targetname_offset;
ULONG targetname_size;
ULONG username_offset;
ULONG username_size;
ULONG comment_offset;
ULONG comment_size;
ULONG blob_offset;
ULONG blob_size;
BOOL blob_preserve;
FILETIME last_written;
};
