struct _MEMORY_BASIC_INFORMATION
{
LPVOID BaseAddress;
LPVOID AllocationBase;
DWORD AllocationProtect;
__declspec(align(8)) SIZE_T RegionSize;
DWORD State;
DWORD Protect;
DWORD Type;
};
