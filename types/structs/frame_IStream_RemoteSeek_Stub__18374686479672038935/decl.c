struct __frame_IStream_RemoteSeek_Stub
{
EXCEPTION_REGISTRATION_RECORD frame;
__filter_func filter;
__finally_func finally;
__wine_jmp_buf jmp;
DWORD code;
unsigned __int8 abnormal_termination;
unsigned __int8 filter_level;
unsigned __int8 finally_level;
MIDL_STUB_MESSAGE _StubMsg;
IStream_0 *_This;
HRESULT_0 _RetVal;
__declspec(align(8)) LARGE_INTEGER_0 dlibMove;
void *_p_dlibMove;
DWORD dwOrigin;
__declspec(align(8)) ULARGE_INTEGER _W0;
ULARGE_INTEGER *plibNewPosition;
};
