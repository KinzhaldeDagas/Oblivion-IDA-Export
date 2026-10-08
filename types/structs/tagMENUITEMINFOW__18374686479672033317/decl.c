struct tagMENUITEMINFOW
{
UINT cbSize;
UINT fMask;
UINT fType;
UINT fState;
UINT wID;
HMENU hSubMenu;
HBITMAP hbmpChecked;
HBITMAP hbmpUnchecked;
ULONG_PTR dwItemData;
LPWSTR dwTypeData;
UINT cch;
HBITMAP hbmpItem;
};
