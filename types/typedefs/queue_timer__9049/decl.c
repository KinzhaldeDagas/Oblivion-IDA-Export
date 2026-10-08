struct queue_timer
{
timer_queue *q;
list entry;
ULONG runcount;
RTL_WAITORTIMERCALLBACKFUNC callback;
PVOID param;
DWORD period;
ULONG flags;
ULONGLONG expire;
BOOL destroy;
HANDLE event;
};
