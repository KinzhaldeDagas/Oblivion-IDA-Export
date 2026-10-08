struct tagPROCESSENTRY32
{
DWORD dwSize;
DWORD cntUsage;
DWORD th32ProcessID;
__declspec(align(8)) ULONG_PTR th32DefaultHeapID;
DWORD th32ModuleID;
DWORD cntThreads;
DWORD th32ParentProcessID;
LONG pcPriClassBase;
DWORD dwFlags;
char szExeFile[260];
};
