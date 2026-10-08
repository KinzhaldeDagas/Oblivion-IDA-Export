struct _EVENT_TRACE_LOGFILEW
{
LPWSTR LogFileName;
LPWSTR LoggerName;
LONGLONG CurrentTime;
ULONG LogFileMode;
EVENT_TRACE CurrentEvent;
TRACE_LOGFILE_HEADER LogfileHeader;
PEVENT_TRACE_BUFFER_CALLBACKW BufferCallback;
ULONG BufferSize;
ULONG Filled;
ULONG EventsLost;
PEVENT_CALLBACK EventCallback;
PVOID Context;
};
