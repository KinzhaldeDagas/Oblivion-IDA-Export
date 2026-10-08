struct _PERF_DATA_BLOCK
{
WCHAR_0 Signature[4];
DWORD LittleEndian;
DWORD Version;
DWORD Revision;
DWORD TotalByteLength;
DWORD HeaderLength;
DWORD NumObjectTypes;
DWORD DefaultObject;
SYSTEMTIME SystemTime;
__declspec(align(8)) LARGE_INTEGER_0 PerfTime;
LARGE_INTEGER_0 PerfFreq;
LARGE_INTEGER_0 PerfTime100nSec;
DWORD SystemNameLength;
DWORD SystemNameOffset;
};
