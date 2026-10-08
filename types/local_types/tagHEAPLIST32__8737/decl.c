struct tagHEAPLIST32
{
SIZE_T dwSize;
DWORD th32ProcessID;
__declspec(align(8)) ULONG_PTR th32HeapID;
DWORD dwFlags;
};
