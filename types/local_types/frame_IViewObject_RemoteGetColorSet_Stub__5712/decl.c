struct __declspec(align(16)) __frame_IViewObject_RemoteGetColorSet_Stub
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
DWORD dwDrawAspect;
LONG lindex;
__declspec(align(8)) ULONG_PTR pvAspect;
DVTARGETDEVICE *ptd __offset(OFF64|AUTO);
ULONG_PTR hicTargetDev;
LOGPALETTE *_W0 __offset(OFF64|AUTO);
LOGPALETTE **ppColorSet __offset(OFF64|AUTO);
};
