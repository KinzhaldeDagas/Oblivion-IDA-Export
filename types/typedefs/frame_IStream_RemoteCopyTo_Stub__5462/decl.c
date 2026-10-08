struct __frame_IStream_RemoteCopyTo_Stub
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
IStream_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
IStream_0 *pstm __offset(OFF64|AUTO);
ULARGE_INTEGER cb;
void *_p_cb __offset(OFF64|AUTO);
ULARGE_INTEGER _W0;
ULARGE_INTEGER *pcbRead __offset(OFF64|AUTO);
ULARGE_INTEGER _W1;
ULARGE_INTEGER *pcbWritten __offset(OFF64|AUTO);
};
