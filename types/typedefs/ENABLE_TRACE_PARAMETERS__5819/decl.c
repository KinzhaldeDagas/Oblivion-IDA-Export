struct __declspec(align(8)) _ENABLE_TRACE_PARAMETERS
{
ULONG Version;
ULONG EnableProperty;
ULONG ControlFlags;
GUID SourceId;
_EVENT_FILTER_DESCRIPTOR *EnableFilterDesc;
ULONG FilterDescCount;
};
