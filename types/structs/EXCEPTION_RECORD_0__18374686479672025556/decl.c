struct _EXCEPTION_RECORD_0
{
DWORD ExceptionCode;
DWORD ExceptionFlags;
_EXCEPTION_RECORD_0 *ExceptionRecord;
PVOID ExceptionAddress;
DWORD NumberParameters;
__declspec(align(8)) ULONG_PTR ExceptionInformation[15];
};
