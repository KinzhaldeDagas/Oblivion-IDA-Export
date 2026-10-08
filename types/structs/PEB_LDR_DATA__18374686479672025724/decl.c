struct _PEB_LDR_DATA
{
ULONG Length;
BOOLEAN Initialized;
PVOID SsHandle;
LIST_ENTRY InLoadOrderModuleList;
LIST_ENTRY InMemoryOrderModuleList;
LIST_ENTRY InInitializationOrderModuleList;
PVOID EntryInProgress;
BOOLEAN ShutdownInProgress;
HANDLE ShutdownThreadId;
};
