struct _CBE_ITEMDATA
{
_CBE_ITEMDATA *next;
UINT mask;
LPWSTR pszText;
LPWSTR pszTemp;
int cchTextMax;
int iImage;
int iSelectedImage;
int iOverlay;
int iIndent;
__declspec(align(8)) LPARAM_0 lParam;
};
