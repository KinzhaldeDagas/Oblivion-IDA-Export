struct __declspec(align(8)) __frame_ISynchronize_Wait_Stub
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
ISynchronize_0 *_This;
HRESULT_0 _RetVal;
DWORD dwFlags;
DWORD dwMilliseconds;
};
