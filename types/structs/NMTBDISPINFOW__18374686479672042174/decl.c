struct __declspec(align(8)) NMTBDISPINFOW
{
NMHDR hdr;
DWORD dwMask;
int idCommand;
DWORD_PTR lParam;
int iImage;
LPWSTR pszText;
int cchText;
};
