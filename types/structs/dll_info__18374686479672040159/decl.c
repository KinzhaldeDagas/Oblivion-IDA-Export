struct dll_info
{
HANDLE handle;
IMAGE_NT_HEADERS *nt;
DWORD file_pos;
DWORD mem_pos;
};
