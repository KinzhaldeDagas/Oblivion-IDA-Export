struct tagNMTOOLBARW
{
NMHDR hdr;
INT iItem;
__declspec(align(8)) TBBUTTON tbButton;
INT cchText;
LPWSTR pszText;
RECT rcButton;
};
