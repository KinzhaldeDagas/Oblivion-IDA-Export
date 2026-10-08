struct __declspec(align(8)) _QUERY_SERVICE_LOCK_STATUSW
{
DWORD fIsLocked;
LPWSTR lpLockOwner;
DWORD dwLockDuration;
};
