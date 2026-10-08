struct _SYSTEM_PROCESS_INFORMATION
{
ULONG NextEntryOffset;
DWORD dwThreadCount;
DWORD dwUnknown1[6];
LARGE_INTEGER_0 CreationTime;
LARGE_INTEGER_0 UserTime;
LARGE_INTEGER_0 KernelTime;
UNICODE_STRING ProcessName;
DWORD dwBasePriority;
HANDLE UniqueProcessId;
HANDLE ParentProcessId;
ULONG HandleCount;
ULONG SessionId;
DWORD dwUnknown4;
VM_COUNTERS_EX vmCounters;
IO_COUNTERS ioCounters;
SYSTEM_THREAD_INFORMATION ti[1];
};
