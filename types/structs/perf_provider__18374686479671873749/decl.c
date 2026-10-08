struct perf_provider
{
HMODULE perflib __offset(OFF64|AUTO);
WCHAR_0 linkage[260];
WCHAR_0 objects[260];
PM_OPEN_PROC *pOpen __offset(OFF64|AUTO);
PM_CLOSE_PROC *pClose __offset(OFF64|AUTO);
PM_COLLECT_PROC *pCollect __offset(OFF64|AUTO);
};
