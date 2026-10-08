struct _DISPATCHER_CONTEXT_1
{
ULONG64 ControlPc;
ULONG64 ImageBase;
PRUNTIME_FUNCTION FunctionEntry;
ULONG64 EstablisherFrame;
ULONG64 TargetIp;
PCONTEXT_2 ContextRecord;
PEXCEPTION_ROUTINE LanguageHandler;
PVOID HandlerData;
PUNWIND_HISTORY_TABLE HistoryTable;
DWORD ScopeIndex;
DWORD Fill0;
};
