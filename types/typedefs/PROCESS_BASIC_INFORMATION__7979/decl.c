struct _PROCESS_BASIC_INFORMATION
{
NTSTATUS ExitStatus;
PEB *PebBaseAddress;
ULONG_PTR AffinityMask;
LONG BasePriority;
__declspec(align(8)) ULONG_PTR UniqueProcessId;
ULONG_PTR InheritedFromUniqueProcessId;
};
