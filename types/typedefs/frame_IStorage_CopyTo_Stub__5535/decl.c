struct __declspec(align(16)) __frame_IStorage_CopyTo_Stub
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
IStorage_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
DWORD ciidExclude;
const IID *rgiidExclude __offset(OFF64|AUTO);
SNB snbExclude __offset(OFF64|AUTO);
void *_p_snbExclude __offset(OFF64|AUTO);
IStorage_0 *pstgDest __offset(OFF64|AUTO);
};
