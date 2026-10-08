struct _IMAGE_LOAD_CONFIG_DIRECTORY64
{
DWORD Size;
DWORD TimeDateStamp;
WORD MajorVersion;
WORD MinorVersion;
DWORD GlobalFlagsClear;
DWORD GlobalFlagsSet;
DWORD CriticalSectionDefaultTimeout;
ULONGLONG DeCommitFreeBlockThreshold;
ULONGLONG DeCommitTotalFreeThreshold;
ULONGLONG LockPrefixTable;
ULONGLONG MaximumAllocationSize;
ULONGLONG VirtualMemoryThreshold;
ULONGLONG ProcessAffinityMask;
DWORD ProcessHeapFlags;
WORD CSDVersion;
WORD Reserved1;
ULONGLONG EditList;
ULONGLONG SecurityCookie;
ULONGLONG SEHandlerTable;
ULONGLONG SEHandlerCount;
};
