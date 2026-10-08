struct $E256EADC966D3789CF02419B70541E0A
{
PTP_TIMER_CALLBACK callback;
BOOL timer_initialized;
BOOL timer_pending;
list timer_entry;
BOOL timer_set;
__declspec(align(8)) ULONGLONG timeout;
LONG period;
LONG window_length;
};
