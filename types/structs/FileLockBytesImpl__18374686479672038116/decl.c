struct FileLockBytesImpl
{
ILockBytes_0 ILockBytes_iface;
LONG ref;
HANDLE hfile;
DWORD flProtect;
LPWSTR pwcsName;
};
