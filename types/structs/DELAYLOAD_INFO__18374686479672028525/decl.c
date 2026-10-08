struct __declspec(align(8)) _DELAYLOAD_INFO
{
ULONG Size;
PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor;
PIMAGE_THUNK_DATA ThunkAddress;
LPCSTR TargetDllName;
DELAYLOAD_PROC_DESCRIPTOR TargetApiDescriptor;
PVOID TargetModuleBase;
PVOID Unused;
ULONG LastError;
};
