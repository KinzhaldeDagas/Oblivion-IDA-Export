struct __frame_IRemUnknown_RemQueryInterface_Stub
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
IRemUnknown_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
REFIPID_0 ripid __offset(OFF64|AUTO);
ULONG cRefs;
unsigned __int16 cIids;
IID *iids __offset(OFF64|AUTO);
REMQIRESULT *_W0 __offset(OFF64|AUTO);
REMQIRESULT **ppQIResults __offset(OFF64|AUTO);
};
