struct __declspec(align(16)) __frame_IOleObject_DoVerb_Stub
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
IOleObject_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
LONG iVerb;
LPMSG lpmsg __offset(OFF64|AUTO);
IOleClientSite_0 *pActiveSite __offset(OFF64|AUTO);
LONG lindex;
HWND hwndParent __offset(OFF64|AUTO);
void *_p_hwndParent __offset(OFF64|AUTO);
LPCRECT lprcPosRect __offset(OFF64|AUTO);
};
