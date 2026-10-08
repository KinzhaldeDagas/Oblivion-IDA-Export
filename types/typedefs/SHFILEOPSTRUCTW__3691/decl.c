struct _SHFILEOPSTRUCTW
{
HWND hwnd;
UINT wFunc;
LPCWSTR pFrom;
LPCWSTR pTo;
FILEOP_FLAGS fFlags;
BOOL fAnyOperationsAborted;
LPVOID hNameMappings;
LPCWSTR lpszProgressTitle;
};
