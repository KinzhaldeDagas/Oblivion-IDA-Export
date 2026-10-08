struct _PERFORMANCE_INFORMATION
{
DWORD cb;
__declspec(align(8)) SIZE_T CommitTotal;
SIZE_T CommitLimit;
SIZE_T CommitPeak;
SIZE_T PhysicalTotal;
SIZE_T PhysicalAvailable;
SIZE_T SystemCache;
SIZE_T KernelTotal;
SIZE_T KernelPaged;
SIZE_T KernelNonpaged;
SIZE_T PageSize;
DWORD HandleCount;
DWORD ProcessCount;
DWORD ThreadCount;
};
