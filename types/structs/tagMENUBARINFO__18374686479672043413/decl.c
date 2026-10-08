struct __declspec(align(8)) tagMENUBARINFO
{
DWORD cbSize;
RECT rcBar;
HMENU hMenu;
HWND hwndMenu;
__int32 fBarFocused : 1;
__int32 fFocused : 1;
};
