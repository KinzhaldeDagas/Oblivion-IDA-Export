struct __declspec(align(8)) tagMSGBOXPARAMSA
{
UINT cbSize;
HWND hwndOwner;
HINSTANCE hInstance;
LPCSTR lpszText;
LPCSTR lpszCaption;
DWORD dwStyle;
LPCSTR lpszIcon;
DWORD_PTR dwContextHelpId;
MSGBOXCALLBACK lpfnMsgBoxCallback;
DWORD dwLanguageId;
};
