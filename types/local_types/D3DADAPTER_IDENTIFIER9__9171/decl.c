struct _D3DADAPTER_IDENTIFIER9
{
char Driver[512];
char Description[512];
char DeviceName[32];
LARGE_INTEGER DriverVersion;
DWORD VendorId;
DWORD DeviceId;
DWORD SubSysId;
DWORD Revision;
GUID DeviceIdentifier;
DWORD WHQLLevel;
};
