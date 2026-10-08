struct __declspec(align(8)) _ICONINFOEXA
{
DWORD cbSize;
BOOL fIcon;
DWORD xHotspot;
DWORD yHotspot;
HBITMAP hbmMask;
HBITMAP hbmColor;
WORD wResID;
CHAR szModName[260];
CHAR szResName[260];
};
