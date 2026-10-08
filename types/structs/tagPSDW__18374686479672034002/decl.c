struct tagPSDW
{
DWORD lStructSize;
HWND hwndOwner;
HGLOBAL hDevMode;
HGLOBAL hDevNames;
DWORD Flags;
POINT ptPaperSize;
RECT rtMinMargin;
RECT rtMargin;
HINSTANCE hInstance;
LPARAM_0 lCustData;
LPPAGESETUPHOOK lpfnPageSetupHook;
LPPAGEPAINTHOOK lpfnPagePaintHook;
LPCWSTR lpPageSetupTemplateName;
HGLOBAL hPageSetupTemplate;
};
