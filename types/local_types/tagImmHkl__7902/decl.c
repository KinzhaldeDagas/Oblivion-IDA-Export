struct _tagImmHkl
{
list entry;
HKL hkl;
HMODULE hIME;
IMEINFO imeInfo;
WCHAR_0 imeClassName[17];
ULONG uSelected;
HWND UIWnd;
BOOL (*pImeInquire)(IMEINFO *, WCHAR_0 *, const WCHAR_0 *);
BOOL (*pImeConfigure)(HKL, HWND, DWORD, void *);
BOOL (*pImeDestroy)(UINT);
LRESULT_0 (*pImeEscape)(HIMC, UINT, void *);
BOOL (*pImeSelect)(HIMC, BOOL);
BOOL (*pImeSetActiveContext)(HIMC, BOOL);
UINT (*pImeToAsciiEx)(UINT, UINT, const BYTE *, DWORD *, UINT, HIMC);
BOOL (*pNotifyIME)(HIMC, DWORD, DWORD, DWORD);
BOOL (*pImeRegisterWord)(const WCHAR_0 *, DWORD, const WCHAR_0 *);
BOOL (*pImeUnregisterWord)(const WCHAR_0 *, DWORD, const WCHAR_0 *);
UINT (*pImeEnumRegisterWord)(REGISTERWORDENUMPROCW, const WCHAR_0 *, DWORD, const WCHAR_0 *, void *);
BOOL (*pImeSetCompositionString)(HIMC, DWORD, const void *, DWORD, const void *, DWORD);
DWORD (*pImeConversionList)(HIMC, const WCHAR_0 *, CANDIDATELIST *, DWORD, UINT);
BOOL (*pImeProcessKey)(HIMC, UINT, LPARAM_0, const BYTE *);
UINT (*pImeGetRegisterWordStyle)(UINT, STYLEBUFW *);
DWORD (*pImeGetImeMenuItems)(HIMC, DWORD, DWORD, IMEMENUITEMINFOW *, IMEMENUITEMINFOW *, DWORD);
};
