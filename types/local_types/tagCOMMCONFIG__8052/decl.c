struct __declspec(align(4)) tagCOMMCONFIG
{
DWORD dwSize;
WORD wVersion;
WORD wReserved;
DCB dcb;
DWORD dwProviderSubType;
DWORD dwProviderOffset;
DWORD dwProviderSize;
WCHAR_0 wcProviderData[1];
};
