struct _PROCESS_BASIC_INFORMATION_0
{
NTSTATUS ExitStatus;
PEB_0 *PebBaseAddress;
ULONG_PTR AffinityMask;
LONG BasePriority;
__declspec(align(8)) ULONG_PTR UniqueProcessId;
ULONG_PTR InheritedFromUniqueProcessId;
};
