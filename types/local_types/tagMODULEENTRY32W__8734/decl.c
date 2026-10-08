struct tagMODULEENTRY32W
{
DWORD dwSize;
DWORD th32ModuleID;
DWORD th32ProcessID;
DWORD GlblcntUsage;
DWORD ProccntUsage;
BYTE *modBaseAddr;
DWORD modBaseSize;
HMODULE hModule;
WCHAR_0 szModule[256];
WCHAR_0 szExePath[260];
};
