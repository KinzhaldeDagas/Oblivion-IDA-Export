struct __declspec(align(16)) __exception_frame
{
EXCEPTION_REGISTRATION_RECORD frame;
__filter_func filter;
__finally_func finally;
__wine_jmp_buf jmp;
DWORD code;
unsigned __int8 abnormal_termination;
unsigned __int8 filter_level;
unsigned __int8 finally_level;
};
