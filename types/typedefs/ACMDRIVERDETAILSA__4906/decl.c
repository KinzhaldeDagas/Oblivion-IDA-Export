struct __unaligned __declspec(align(4)) _ACMDRIVERDETAILSA
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
CHAR szShortName[32];
CHAR szLongName[128];
CHAR szCopyright[80];
CHAR szLicensing[128];
CHAR szFeatures[512];
};
