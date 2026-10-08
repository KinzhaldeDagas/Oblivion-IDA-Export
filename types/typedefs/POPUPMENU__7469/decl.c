struct POPUPMENU
{
user_object obj;
WORD wFlags;
WORD Width;
WORD Height;
UINT nItems;
HWND hWnd;
MENUITEM *items;
UINT FocusedItem;
HWND hwndOwner;
BOOL bScrolling;
UINT nScrollPos;
UINT nTotalHeight;
RECT items_rect;
LONG refcount;
DWORD dwStyle;
UINT cyMax;
HBRUSH hbrBack;
DWORD dwContextHelpID;
__declspec(align(8)) ULONG_PTR dwMenuData;
HMENU hSysMenuOwner;
WORD textOffset;
};
