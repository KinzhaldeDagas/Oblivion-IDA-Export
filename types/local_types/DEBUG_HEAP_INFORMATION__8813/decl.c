struct _DEBUG_HEAP_INFORMATION
{
ULONG Base;
ULONG Flags;
USHORT Granularity;
USHORT Unknown;
ULONG Allocated;
ULONG Committed;
ULONG TagCount;
ULONG BlockCount;
ULONG Reserved[7];
PVOID Tags;
PVOID Blocks;
};
