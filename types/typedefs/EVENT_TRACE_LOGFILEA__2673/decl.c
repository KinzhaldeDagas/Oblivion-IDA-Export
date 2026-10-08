struct _EVENT_TRACE_LOGFILEA
{
LPSTR LogFileName;
LPSTR LoggerName;
LONGLONG CurrentTime;
ULONG LogFileMode;
EVENT_TRACE CurrentEvent;
TRACE_LOGFILE_HEADER LogfileHeader;
PEVENT_TRACE_BUFFER_CALLBACKA BufferCallback;
ULONG BufferSize;
ULONG Filled;
ULONG EventsLost;
PEVENT_CALLBACK EventCallback;
PVOID Context;
};
