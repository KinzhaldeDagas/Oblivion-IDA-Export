struct __frame_ILockBytes_RemoteWriteAt_Stub
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
ILockBytes_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
__declspec(align(8)) ULARGE_INTEGER ulOffset;
void *_p_ulOffset __offset(OFF64|AUTO);
const byte *pv __offset(OFF64|AUTO);
ULONG cb;
ULONG _W0;
ULONG *pcbWritten __offset(OFF64|AUTO);
};
