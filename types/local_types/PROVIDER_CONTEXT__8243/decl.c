struct _PROVIDER_CONTEXT
{
DWORD ContextSize;
DWORD Reserved;
PERFLIBREQUEST ControlCallback;
PERF_MEM_ALLOC MemAllocRoutine;
PERF_MEM_FREE MemFreeRoutine;
LPVOID pMemContext;
};
