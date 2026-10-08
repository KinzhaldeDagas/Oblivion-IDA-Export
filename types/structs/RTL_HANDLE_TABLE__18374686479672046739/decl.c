struct _RTL_HANDLE_TABLE
{
ULONG MaxHandleCount;
ULONG HandleSize;
ULONG Unused[2];
PVOID NextFree;
PVOID FirstHandle;
PVOID ReservedMemory;
PVOID MaxHandle;
};
