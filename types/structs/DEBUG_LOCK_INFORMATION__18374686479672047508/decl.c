struct _DEBUG_LOCK_INFORMATION
{
PVOID Address;
USHORT Type;
USHORT CreatorBackTraceIndex;
ULONG OwnerThreadId;
ULONG ActiveCount;
ULONG ContentionCount;
ULONG EntryCount;
ULONG RecursionCount;
ULONG NumberOfSharedWaiters;
ULONG NumberOfExclusiveWaiters;
};
