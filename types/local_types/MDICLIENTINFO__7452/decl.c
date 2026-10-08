struct __declspec(align(8)) MDICLIENTINFO
{
LONG reserved;
UINT nActiveChildren;
HWND hwndChildMaximized;
HWND hwndActiveChild;
HWND *child;
HMENU hFrameMenu;
HMENU hWindowMenu;
UINT idFirstChild;
LPWSTR frameTitle;
UINT nTotalCreated;
UINT mdiFlags;
UINT sbRecalc;
};
