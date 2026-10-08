struct __frame_IMoniker_RemoteBindToObject_Stub
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
IMoniker_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
IBindCtx_0 *pbc __offset(OFF64|AUTO);
IMoniker_0 *pmkToLeft __offset(OFF64|AUTO);
const IID *riidResult __offset(OFF64|AUTO);
IUnknown_0 *_W0 __offset(OFF64|AUTO);
IUnknown_0 **ppvResult __offset(OFF64|AUTO);
};
