struct __declspec(align(16)) __frame_IThumbnailExtractor_ExtractThumbnail_Stub
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
IThumbnailExtractor_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
IStorage_0 *pStg __offset(OFF64|AUTO);
ULONG ulLength;
ULONG ulHeight;
ULONG _W0;
ULONG *pulOutputLength __offset(OFF64|AUTO);
ULONG _W1;
ULONG *pulOutputHeight __offset(OFF64|AUTO);
HBITMAP _W2 __offset(OFF64|AUTO);
HBITMAP *phOutputBitmap __offset(OFF64|AUTO);
};
