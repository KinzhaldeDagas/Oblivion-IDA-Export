struct __declspec(align(8)) _SP_DEVINSTALL_PARAMS_W
{
DWORD cbSize;
DWORD Flags;
DWORD FlagsEx;
HWND hwndParent;
PSP_FILE_CALLBACK_W InstallMsgHandler;
PVOID InstallMsgHandlerContext;
HSPFILEQ FileQueue;
ULONG_PTR ClassInstallReserved;
DWORD Reserved;
WCHAR_0 DriverPath[260];
};
