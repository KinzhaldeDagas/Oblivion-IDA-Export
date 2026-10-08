struct _EVENT_TRACE
{
EVENT_TRACE_HEADER Header;
ULONG InstanceId;
ULONG ParentInstanceId;
GUID ParentGuid;
PVOID MofData;
ULONG MofLength;
ULONG ClientContext;
};
