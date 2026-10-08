struct _THREAD_BASIC_INFORMATION
{
NTSTATUS ExitStatus;
PVOID TebBaseAddress;
CLIENT_ID ClientId;
ULONG_PTR AffinityMask;
LONG Priority;
LONG BasePriority;
};
