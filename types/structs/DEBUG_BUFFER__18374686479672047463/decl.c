struct _DEBUG_BUFFER
{
HANDLE SectionHandle;
PVOID SectionBase;
PVOID RemoteSectionBase;
ULONG SectionBaseDelta;
HANDLE EventPairHandle;
ULONG Unknown[2];
HANDLE RemoteThreadHandle;
ULONG InfoClassMask;
ULONG SizeOfInfo;
ULONG AllocatedSize;
ULONG SectionSize;
PVOID ModuleInformation;
PVOID BackTraceInformation;
PVOID HeapInformation;
PVOID LockInformation;
PVOID Reserved[8];
};
