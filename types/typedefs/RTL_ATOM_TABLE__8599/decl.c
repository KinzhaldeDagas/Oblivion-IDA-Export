struct _RTL_ATOM_TABLE
{
ULONG Signature;
RTL_CRITICAL_SECTION CriticalSection;
RTL_HANDLE_TABLE HandleTable;
ULONG NumberOfBuckets;
RTL_ATOM_TABLE_ENTRY *Buckets[1];
};
