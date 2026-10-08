struct __declspec(align(8)) tagMODULEENTRY32
{
DWORD dwSize;
DWORD th32ModuleID;
DWORD th32ProcessID;
DWORD GlblcntUsage;
DWORD ProccntUsage;
BYTE *modBaseAddr;
DWORD modBaseSize;
HMODULE hModule;
char szModule[256];
char szExePath[260];
};
