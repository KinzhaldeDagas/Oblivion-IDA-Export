struct _VTableProvStruc
{
DWORD Version;
BOOL (*FuncVerifyImage)(LPCSTR, BYTE *);
void (*FuncReturnhWnd)(HWND *);
DWORD dwProvType;
BYTE *pbContextInfo;
DWORD cbContextInfo;
LPSTR pszProvName;
};
