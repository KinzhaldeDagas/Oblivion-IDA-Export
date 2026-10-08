struct WINE_MIDIStream
{
HMIDIOUT hDevice;
HANDLE hThread;
DWORD dwThreadID;
CRITICAL_SECTION lock;
DWORD dwTempo;
DWORD dwTimeDiv;
ULONGLONG position_usec;
DWORD dwPulses;
DWORD dwStartTicks;
DWORD dwElapsedMS;
DWORD dwLastPositionMS;
WORD wFlags;
WORD status;
HANDLE hEvent;
LPMIDIHDR lpMidiHdr;
DWORD dwStreamID;
wine_rb_entry entry;
};
