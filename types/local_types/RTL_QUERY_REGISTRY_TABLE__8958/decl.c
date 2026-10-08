struct __declspec(align(8)) _RTL_QUERY_REGISTRY_TABLE
{
PRTL_QUERY_REGISTRY_ROUTINE QueryRoutine;
ULONG Flags;
PWSTR Name;
PVOID EntryContext;
ULONG DefaultType;
PVOID DefaultData;
ULONG DefaultLength;
};
