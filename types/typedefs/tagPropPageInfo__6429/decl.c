struct __declspec(align(8)) tagPropPageInfo
{
HPROPSHEETPAGE hpage;
HWND hwndPage;
BOOL isDirty;
LPCWSTR pszText;
BOOL hasHelp;
BOOL useCallback;
BOOL hasIcon;
};
