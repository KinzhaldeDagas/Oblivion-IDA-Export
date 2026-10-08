struct tagGESTUREINFO
{
UINT cbSize;
DWORD dwFlags;
DWORD dwID;
HWND hwndTarget;
POINTS ptsLocation;
DWORD dwInstanceID;
DWORD dwSequenceID;
__declspec(align(8)) ULONGLONG ullArguments;
UINT cbExtraArgs;
};
