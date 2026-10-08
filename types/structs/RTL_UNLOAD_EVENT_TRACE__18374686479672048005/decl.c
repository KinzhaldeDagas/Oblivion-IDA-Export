struct __declspec(align(8)) _RTL_UNLOAD_EVENT_TRACE
{
void *BaseAddress;
SIZE_T SizeOfImage;
ULONG Sequence;
ULONG TimeDateStamp;
ULONG CheckSum;
WCHAR_0 ImageName[32];
};
