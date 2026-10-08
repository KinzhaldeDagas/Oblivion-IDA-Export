struct tagMCI_ANIM_OPEN_PARMSW
{
DWORD_PTR dwCallback;
MCIDEVICEID wDeviceID;
__unaligned __declspec(align(1)) LPCWSTR lpstrDeviceType;
__unaligned __declspec(align(1)) LPCWSTR lpstrElementName;
__unaligned __declspec(align(1)) LPCWSTR lpstrAlias;
DWORD dwStyle;
HWND hWndParent;
};
