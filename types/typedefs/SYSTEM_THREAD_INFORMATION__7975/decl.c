struct _SYSTEM_THREAD_INFORMATION
{
LARGE_INTEGER_0 KernelTime;
LARGE_INTEGER_0 UserTime;
LARGE_INTEGER_0 CreateTime;
DWORD dwTickCount;
LPVOID StartAddress;
CLIENT_ID ClientId;
DWORD dwCurrentPriority;
DWORD dwBasePriority;
DWORD dwContextSwitches;
DWORD dwThreadState;
DWORD dwWaitReason;
DWORD dwUnknown;
};
