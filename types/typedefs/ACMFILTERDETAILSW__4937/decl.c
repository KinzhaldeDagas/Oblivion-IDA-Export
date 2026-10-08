struct __unaligned __declspec(align(4)) _ACMFILTERDETAILSW
{
DWORD cbStruct;
DWORD dwFilterIndex;
DWORD dwFilterTag;
DWORD fdwSupport;
PWAVEFILTER pwfltr;
DWORD cbwfltr;
WCHAR_0 szFilter[128];
};
