struct __declspec(align(16)) __frame_IOleItemContainer_GetObject_Stub
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
IOleItemContainer_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
LPOLESTR pszItem __offset(OFF64|AUTO);
DWORD dwSpeedNeeded;
IBindCtx_0 *pbc __offset(OFF64|AUTO);
const IID *riid __offset(OFF64|AUTO);
void *_W0 __offset(OFF64|AUTO);
void **ppvObject __offset(OFF64|AUTO);
};
