struct __declspec(align(8)) _LDR_DLL_LOADED_NOTIFICATION_DATA
{
ULONG Flags;
const UNICODE_STRING *FullDllName;
const UNICODE_STRING *BaseDllName;
void *DllBase;
ULONG SizeOfImage;
};
