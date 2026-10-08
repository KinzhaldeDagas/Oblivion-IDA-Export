struct __frame_IDropTarget_Drop_Stub
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
IDropTarget_0 *_This __offset(OFF64|AUTO);
HRESULT_0 _RetVal;
IDataObject_0 *pDataObj __offset(OFF64|AUTO);
DWORD grfKeyState;
POINTL pt;
void *_p_pt __offset(OFF64|AUTO);
DWORD *pdwEffect __offset(OFF64|AUTO);
};
