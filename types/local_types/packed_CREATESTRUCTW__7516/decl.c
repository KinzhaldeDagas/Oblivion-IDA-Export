struct packed_CREATESTRUCTW
{
ULONGLONG lpCreateParams;
ULONGLONG hInstance;
user_handle_t hMenu;
DWORD __pad1;
user_handle_t hwndParent;
DWORD __pad2;
INT cy;
INT cx;
INT y;
INT x;
LONG style;
__declspec(align(8)) ULONGLONG lpszName;
ULONGLONG lpszClass;
DWORD dwExStyle;
DWORD __pad3;
};
