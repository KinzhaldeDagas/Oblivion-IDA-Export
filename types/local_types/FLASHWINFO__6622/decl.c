struct __declspec(align(8)) FLASHWINFO
{
UINT cbSize;
HWND hwnd __offset(OFF64|AUTO);
DWORD dwFlags;
UINT uCount;
DWORD dwTimeout;
};
