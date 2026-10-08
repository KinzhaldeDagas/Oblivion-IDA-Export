struct tagSTATSTG_0
{
LPOLESTR pwcsName;
DWORD type;
__declspec(align(8)) ULARGE_INTEGER cbSize;
FILETIME mtime;
FILETIME ctime;
FILETIME atime;
DWORD grfMode;
DWORD grfLocksSupported;
CLSID clsid;
DWORD grfStateBits;
DWORD reserved;
};
