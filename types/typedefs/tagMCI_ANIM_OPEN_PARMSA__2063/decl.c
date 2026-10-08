struct tagMCI_ANIM_OPEN_PARMSA
{
DWORD_PTR dwCallback;
MCIDEVICEID wDeviceID;
__unaligned __declspec(align(1)) LPCSTR lpstrDeviceType;
__unaligned __declspec(align(1)) LPCSTR lpstrElementName;
__unaligned __declspec(align(1)) LPCSTR lpstrAlias;
DWORD dwStyle;
HWND hWndParent;
};
