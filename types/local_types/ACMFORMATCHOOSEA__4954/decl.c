struct __unaligned __declspec(align(4)) _ACMFORMATCHOOSEA
{
DWORD cbStruct;
DWORD fdwStyle;
HWND hwndOwner;
PWAVEFORMATEX pwfx;
DWORD cbwfx;
LPCSTR pszTitle;
CHAR szFormatTag[48];
CHAR szFormat[128];
LPSTR pszName;
DWORD cchName;
DWORD fdwEnum;
PWAVEFORMATEX pwfxEnum;
HINSTANCE hInstance;
LPCSTR pszTemplateName;
LPARAM_0 lCustData;
ACMFORMATCHOOSEHOOKPROCA pfnHook;
};
