struct $4B0B62D70BEB9ABFAE9510F27CDDF75F
{
PTP_WAIT_CALLBACK callback;
LONG signaled;
waitqueue_bucket *bucket;
BOOL wait_pending;
list wait_entry;
ULONGLONG timeout;
HANDLE handle;
DWORD flags;
RTL_WAITORTIMERCALLBACKFUNC rtl_callback;
};
