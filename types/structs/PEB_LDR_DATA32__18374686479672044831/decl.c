struct _PEB_LDR_DATA32
{
ULONG Length;
BOOLEAN Initialized;
ULONG SsHandle;
LIST_ENTRY32 InLoadOrderModuleList;
LIST_ENTRY32 InMemoryOrderModuleList;
LIST_ENTRY32 InInitializationOrderModuleList;
ULONG EntryInProgress;
BOOLEAN ShutdownInProgress;
ULONG ShutdownThreadId;
};
