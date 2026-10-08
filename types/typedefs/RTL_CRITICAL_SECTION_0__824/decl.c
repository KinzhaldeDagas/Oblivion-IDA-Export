struct _RTL_CRITICAL_SECTION_0
{
PRTL_CRITICAL_SECTION_DEBUG_0 DebugInfo;
LONG LockCount;
LONG RecursionCount;
HANDLE OwningThread;
HANDLE LockSemaphore;
ULONG_PTR SpinCount;
};
