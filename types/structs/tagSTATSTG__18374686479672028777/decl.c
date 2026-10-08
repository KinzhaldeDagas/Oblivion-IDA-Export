struct tagSTATSTG
{
LPOLESTR pwcsName;
DWORD type;
__declspec(align(8)) ULARGE_INTEGER_0 cbSize;
FILETIME mtime;
FILETIME ctime;
FILETIME atime;
DWORD grfMode;
DWORD grfLocksSupported;
CLSID clsid;
DWORD grfStateBits;
DWORD reserved;
};
