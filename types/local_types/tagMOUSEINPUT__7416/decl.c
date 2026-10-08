struct tagMOUSEINPUT
{
LONG dx;
LONG dy;
DWORD mouseData;
DWORD dwFlags;
DWORD time;
__declspec(align(8)) ULONG_PTR dwExtraInfo;
};
