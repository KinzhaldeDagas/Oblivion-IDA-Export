struct tagNMTOOLBARA
{
NMHDR hdr;
INT iItem;
__declspec(align(8)) TBBUTTON tbButton;
INT cchText;
LPSTR pszText;
RECT rcButton;
};
