struct __frame_IOleInPlaceSite_GetWindowContext_Stub
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
IOleInPlaceSite_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
IOleInPlaceFrame_0 *_W0 __offset(OFF64|AUTO);
IOleInPlaceFrame_0 **ppFrame __offset(OFF64|AUTO);
IOleInPlaceUIWindow_0 *_W1 __offset(OFF64|AUTO);
IOleInPlaceUIWindow_0 **ppDoc __offset(OFF64|AUTO);
tagRECT _W2;
LPRECT lprcPosRect __offset(OFF64|AUTO);
tagRECT _W3;
LPRECT lprcClipRect __offset(OFF64|AUTO);
LPOLEINPLACEFRAMEINFO lpFrameInfo __offset(OFF64|AUTO);
};
