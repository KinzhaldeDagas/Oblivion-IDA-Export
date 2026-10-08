struct _SP_DRVINFO_DETAIL_DATA_A
{
DWORD cbSize;
FILETIME InfDate;
DWORD CompatIDsOffset;
DWORD CompatIDsLength;
__declspec(align(8)) ULONG_PTR Reserved;
CHAR SectionName[256];
CHAR InfFileName[260];
CHAR DrvDescription[256];
CHAR HardwareID[1];
};
