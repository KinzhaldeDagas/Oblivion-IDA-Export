struct _RTL_RWLOCK
{
RTL_CRITICAL_SECTION rtlCS;
HANDLE hSharedReleaseSemaphore;
UINT uSharedWaiters;
HANDLE hExclusiveReleaseSemaphore;
UINT uExclusiveWaiters;
INT iNumberActive;
HANDLE hOwningThreadId;
DWORD dwTimeoutBoost;
PVOID pDebugInfo;
};
