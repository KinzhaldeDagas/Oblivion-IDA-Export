struct __declspec(align(8)) _tagIMMThreadData
{
list entry;
DWORD threadID;
HIMC defaultContext;
HWND hwndDefault;
BOOL disableIME;
DWORD windowRefs;
IInitializeSpy_0 IInitializeSpy_iface;
ULARGE_INTEGER spy_cookie;
BOOL apt_initialized;
};
