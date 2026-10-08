struct _DBGKM_LOAD_DLL
{
HANDLE FileHandle;
PVOID BaseOfDll;
ULONG DebugInfoFileOffset;
ULONG DebugInfoSize;
PVOID NamePointer;
};
