struct _D3DKMT_QUERYSTATISTICS_SYSTEM_MEMORY
{
ULONGLONG BytesAllocated;
ULONGLONG BytesReserved;
ULONG SmallAllocationBlocks;
ULONG LargeAllocationBlocks;
ULONGLONG WriteCombinedBytesAllocated;
ULONGLONG WriteCombinedBytesReserved;
ULONGLONG CachedBytesAllocated;
ULONGLONG CachedBytesReserved;
ULONGLONG SectionBytesAllocated;
ULONGLONG SectionBytesReserved;
};
