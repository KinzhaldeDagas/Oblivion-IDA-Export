struct tagMSLLHOOKSTRUCT
{
POINT pt;
DWORD mouseData;
DWORD flags;
DWORD time;
__declspec(align(8)) ULONG_PTR dwExtraInfo;
};
