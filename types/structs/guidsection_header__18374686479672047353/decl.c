struct guidsection_header
{
DWORD magic;
ULONG size;
DWORD unk[3];
ULONG count;
ULONG index_offset;
DWORD unk2;
ULONG names_offset;
ULONG names_len;
};
