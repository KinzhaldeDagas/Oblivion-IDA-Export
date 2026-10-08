struct __frame_ILockBytes_UnlockRegion_Stub
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
__declspec(align(8)) ULARGE_INTEGER libOffset;
void *_p_libOffset __offset(OFF64|AUTO);
ULARGE_INTEGER cb;
void *_p_cb __offset(OFF64|AUTO);
DWORD dwLockType;
};
