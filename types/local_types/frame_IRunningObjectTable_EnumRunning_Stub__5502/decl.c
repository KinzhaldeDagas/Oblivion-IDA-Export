struct __declspec(align(16)) __frame_IRunningObjectTable_EnumRunning_Stub
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
IRunningObjectTable_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
IEnumMoniker_0 *_W0 __offset(OFF64|AUTO);
IEnumMoniker_0 **ppenumMoniker __offset(OFF64|AUTO);
};
