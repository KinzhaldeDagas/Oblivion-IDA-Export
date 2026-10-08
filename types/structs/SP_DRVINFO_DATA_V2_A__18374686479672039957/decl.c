struct _SP_DRVINFO_DATA_V2_A
{
DWORD cbSize;
DWORD DriverType;
ULONG_PTR Reserved;
CHAR Description[256];
CHAR MfgName[256];
CHAR ProviderName[256];
FILETIME DriverDate;
DWORDLONG DriverVersion;
};
