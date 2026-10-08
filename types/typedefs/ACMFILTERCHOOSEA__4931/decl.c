struct __unaligned __declspec(align(4)) _ACMFILTERCHOOSEA
{
DWORD cbStruct;
DWORD fdwStyle;
HWND hwndOwner;
PWAVEFILTER pwfltr;
DWORD cbwfltr;
LPCSTR pszTitle;
CHAR szFilterTag[48];
CHAR szFilter[128];
LPSTR pszName;
DWORD cchName;
DWORD fdwEnum;
PWAVEFILTER pwfltrEnum;
HINSTANCE hInstance;
LPCSTR pszTemplateName;
LPARAM_0 lCustData;
ACMFILTERCHOOSEHOOKPROCA pfnHook;
};
