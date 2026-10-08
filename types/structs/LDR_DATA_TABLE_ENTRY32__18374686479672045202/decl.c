struct _LDR_DATA_TABLE_ENTRY32
{
LIST_ENTRY32 InLoadOrderModuleList;
LIST_ENTRY32 InMemoryOrderModuleList;
LIST_ENTRY32 InInitializationOrderModuleList;
DWORD BaseAddress;
DWORD EntryPoint;
ULONG SizeOfImage;
UNICODE_STRING32 FullDllName;
UNICODE_STRING32 BaseDllName;
};
