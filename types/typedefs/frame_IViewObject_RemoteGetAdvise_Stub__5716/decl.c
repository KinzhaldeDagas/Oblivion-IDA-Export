struct __frame_IViewObject_RemoteGetAdvise_Stub
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
IViewObject_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
DWORD _W0;
DWORD *pAspects __offset(OFF64|AUTO);
DWORD _W1;
DWORD *pAdvf __offset(OFF64|AUTO);
IAdviseSink_0 *_W2 __offset(OFF64|AUTO);
IAdviseSink_0 **ppAdvSink __offset(OFF64|AUTO);
};
