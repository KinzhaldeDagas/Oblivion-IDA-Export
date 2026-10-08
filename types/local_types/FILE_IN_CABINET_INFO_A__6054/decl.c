struct __declspec(align(8)) _FILE_IN_CABINET_INFO_A
{
LPCSTR NameInCabinet;
DWORD FileSize;
DWORD Win32Error;
WORD DosDate;
WORD DosTime;
WORD DosAttribs;
CHAR FullTargetName[260];
};
