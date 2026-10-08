struct _HttpTimerThreadData
{
PVOID timer_param;
DWORD *last_sent_time;
HANDLE timer_cancelled;
};
