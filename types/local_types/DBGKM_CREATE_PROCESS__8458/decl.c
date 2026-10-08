struct _DBGKM_CREATE_PROCESS
{
ULONG SubSystemKey;
HANDLE FileHandle;
PVOID BaseOfImage;
ULONG DebugInfoFileOffset;
ULONG DebugInfoSize;
DBGKM_CREATE_THREAD InitialThread;
};
