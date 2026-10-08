struct __declspec(align(8)) MENUITEM
{
UINT fType;
UINT fState;
UINT_PTR_0 wID;
HMENU hSubMenu;
HBITMAP hCheckBit;
HBITMAP hUnCheckBit;
LPWSTR text;
ULONG_PTR dwItemData;
LPWSTR dwTypeData;
HBITMAP hbmpItem;
RECT rect;
UINT xTab;
SIZE bmpsize;
};
