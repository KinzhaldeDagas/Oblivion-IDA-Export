struct __unaligned __declspec(align(4)) _ACMFILTERCHOOSEW
{
DWORD cbStruct;
DWORD fdwStyle;
HWND hwndOwner;
PWAVEFILTER pwfltr;
DWORD cbwfltr;
LPCWSTR pszTitle;
WCHAR_0 szFilterTag[48];
WCHAR_0 szFilter[128];
LPWSTR pszName;
DWORD cchName;
DWORD fdwEnum;
PWAVEFILTER pwfltrEnum;
HINSTANCE hInstance;
LPCWSTR pszTemplateName;
LPARAM_0 lCustData;
ACMFILTERCHOOSEHOOKPROCW pfnHook;
};
