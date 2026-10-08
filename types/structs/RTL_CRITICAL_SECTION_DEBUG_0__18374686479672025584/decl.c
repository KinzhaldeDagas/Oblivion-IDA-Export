struct _RTL_CRITICAL_SECTION_DEBUG_0
{
WORD Type;
WORD CreatorBackTraceIndex;
_RTL_CRITICAL_SECTION_0 *CriticalSection;
LIST_ENTRY ProcessLocksList;
DWORD EntryCount;
DWORD ContentionCount;
DWORD_PTR Spare[1];
};
