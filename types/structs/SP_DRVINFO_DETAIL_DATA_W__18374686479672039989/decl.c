struct _SP_DRVINFO_DETAIL_DATA_W
{
DWORD cbSize;
FILETIME InfDate;
DWORD CompatIDsOffset;
DWORD CompatIDsLength;
__declspec(align(8)) ULONG_PTR Reserved;
WCHAR_0 SectionName[256];
WCHAR_0 InfFileName[260];
WCHAR_0 DrvDescription[256];
WCHAR_0 HardwareID[1];
};
