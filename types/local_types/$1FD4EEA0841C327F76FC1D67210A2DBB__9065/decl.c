struct $1FD4EEA0841C327F76FC1D67210A2DBB
{
CRITICAL_SECTION cs;
LONG objcount;
BOOL thread_running;
list pending_timers;
RTL_CONDITION_VARIABLE update_event;
};
