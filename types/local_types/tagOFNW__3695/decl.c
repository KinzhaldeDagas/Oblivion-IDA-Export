struct tagOFNW
{
DWORD lStructSize;
HWND hwndOwner;
HINSTANCE hInstance;
LPCWSTR lpstrFilter;
LPWSTR lpstrCustomFilter;
DWORD nMaxCustFilter;
DWORD nFilterIndex;
LPWSTR lpstrFile;
DWORD nMaxFile;
LPWSTR lpstrFileTitle;
DWORD nMaxFileTitle;
LPCWSTR lpstrInitialDir;
LPCWSTR lpstrTitle;
DWORD Flags;
WORD nFileOffset;
WORD nFileExtension;
LPCWSTR lpstrDefExt;
LPARAM_0 lCustData;
LPOFNHOOKPROC lpfnHook;
LPCWSTR lpTemplateName;
void *pvReserved;
DWORD dwReserved;
DWORD FlagsEx;
};
