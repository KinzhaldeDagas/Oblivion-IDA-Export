struct __declspec(align(8)) _SYSTEM_BASIC_INFORMATION
{
DWORD unknown;
ULONG KeMaximumIncrement;
ULONG PageSize;
ULONG MmNumberOfPhysicalPages;
ULONG MmLowestPhysicalPage;
ULONG MmHighestPhysicalPage;
ULONG_PTR AllocationGranularity;
PVOID LowestUserAddress;
PVOID HighestUserAddress;
ULONG_PTR ActiveProcessorsAffinityMask;
BYTE NumberOfProcessors;
};
