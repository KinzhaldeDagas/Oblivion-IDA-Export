struct strsection_header
{
DWORD magic;
ULONG size;
DWORD unk1[3];
ULONG count;
ULONG index_offset;
DWORD unk2[2];
ULONG global_offset;
ULONG global_len;
};
