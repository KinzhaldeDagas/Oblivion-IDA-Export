struct tagPDW
{
DWORD lStructSize;
HWND hwndOwner;
HGLOBAL hDevMode;
HGLOBAL hDevNames;
HDC hDC;
DWORD Flags;
WORD nFromPage;
WORD nToPage;
WORD nMinPage;
WORD nMaxPage;
WORD nCopies;
HINSTANCE hInstance;
LPARAM_0 lCustData;
LPPRINTHOOKPROC lpfnPrintHook;
LPSETUPHOOKPROC lpfnSetupHook;
LPCWSTR lpPrintTemplateName;
LPCWSTR lpSetupTemplateName;
HGLOBAL hPrintTemplate;
HGLOBAL hSetupTemplate;
};
