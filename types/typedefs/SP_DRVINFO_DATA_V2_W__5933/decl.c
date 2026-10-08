struct _SP_DRVINFO_DATA_V2_W
{
DWORD cbSize;
DWORD DriverType;
ULONG_PTR Reserved;
WCHAR_0 Description[256];
WCHAR_0 MfgName[256];
WCHAR_0 ProviderName[256];
FILETIME DriverDate;
DWORDLONG DriverVersion;
};
