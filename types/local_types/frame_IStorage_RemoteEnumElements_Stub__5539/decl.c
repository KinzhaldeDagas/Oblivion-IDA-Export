struct __frame_IStorage_RemoteEnumElements_Stub
{
EXCEPTION_REGISTRATION_RECORD frame;
__filter_func filter __offset(OFF64|AUTO);
__finally_func finally __offset(OFF64|AUTO);
__wine_jmp_buf jmp;
DWORD code;
unsigned __int8 abnormal_termination;
unsigned __int8 filter_level;
unsigned __int8 finally_level;
MIDL_STUB_MESSAGE _StubMsg;
IStorage_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
DWORD reserved1;
ULONG cbReserved2;
byte *reserved2 __offset(OFF64|AUTO);
DWORD reserved3;
IEnumSTATSTG_0 *_W0 __offset(OFF64|AUTO);
IEnumSTATSTG_0 **ppenum __offset(OFF64|AUTO);
};
