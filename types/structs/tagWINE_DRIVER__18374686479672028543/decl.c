struct tagWINE_DRIVER
{
DWORD dwMagic;
DWORD dwFlags;
HMODULE hModule;
DRIVERPROC lpDrvProc;
DWORD_PTR dwDriverID;
tagWINE_DRIVER *lpPrevItem;
tagWINE_DRIVER *lpNextItem;
};
