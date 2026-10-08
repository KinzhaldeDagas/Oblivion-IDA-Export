struct TBBUTTONINFOW
{
UINT cbSize;
DWORD dwMask;
INT idCommand;
INT iImage;
BYTE fsState;
BYTE fsStyle;
WORD cx;
__declspec(align(8)) DWORD_PTR lParam;
LPWSTR pszText __offset(OFF64|AUTO);
INT cchText;
};
