struct timer_queue
{
DWORD magic;
RTL_CRITICAL_SECTION cs;
list timers;
BOOL quit;
HANDLE event;
HANDLE thread;
};
