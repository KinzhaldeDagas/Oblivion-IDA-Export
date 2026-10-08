struct tagWINE_TIMERENTRY
{
UINT wDelay;
UINT wResol;
LPTIMECALLBACK lpFunc;
DWORD_PTR dwUser;
UINT16 wFlags;
UINT16 wTimerID;
DWORD dwTriggerTime;
};
