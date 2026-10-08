struct __declspec(align(4)) TAB_ITEM
{
DWORD dwState;
LPWSTR pszText;
INT iImage;
RECT rect;
BYTE extra[1];
};
