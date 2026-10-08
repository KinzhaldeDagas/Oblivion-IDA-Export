struct __unaligned __declspec(align(4)) _ACMFILTERDETAILSA
{
DWORD cbStruct;
DWORD dwFilterIndex;
DWORD dwFilterTag;
DWORD fdwSupport;
PWAVEFILTER pwfltr;
DWORD cbwfltr;
CHAR szFilter[128];
};
