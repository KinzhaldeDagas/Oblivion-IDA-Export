struct TVITEMW
{
UINT mask;
HTREEITEM hItem __offset(OFF64|AUTO);
UINT state;
UINT stateMask;
LPWSTR pszText __offset(OFF64|AUTO);
INT cchTextMax;
INT iImage;
INT iSelectedImage;
INT cChildren;
LPARAM_0 lParam;
};
