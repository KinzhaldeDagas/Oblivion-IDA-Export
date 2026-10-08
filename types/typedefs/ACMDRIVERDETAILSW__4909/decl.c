struct __unaligned __declspec(align(4)) _ACMDRIVERDETAILSW
{
DWORD cbStruct;
FOURCC fccType;
FOURCC fccComp;
WORD wMid;
WORD wPid;
DWORD vdwACM;
DWORD vdwDriver;
DWORD fdwSupport;
DWORD cFormatTags;
DWORD cFilterTags;
HICON hicon;
WCHAR_0 szShortName[32];
WCHAR_0 szLongName[128];
WCHAR_0 szCopyright[80];
WCHAR_0 szLicensing[128];
WCHAR_0 szFeatures[512];
};
