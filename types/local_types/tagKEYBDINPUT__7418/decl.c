struct tagKEYBDINPUT
{
WORD wVk;
WORD wScan;
DWORD dwFlags;
DWORD time;
__declspec(align(8)) ULONG_PTR dwExtraInfo;
};
