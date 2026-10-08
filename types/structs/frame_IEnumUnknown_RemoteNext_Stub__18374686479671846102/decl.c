struct __frame_IEnumUnknown_RemoteNext_Stub
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
IEnumUnknown_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
ULONG celt;
IUnknown_0 **rgelt __offset(OFF64|AUTO);
ULONG _W0;
ULONG *pceltFetched __offset(OFF64|AUTO);
};
