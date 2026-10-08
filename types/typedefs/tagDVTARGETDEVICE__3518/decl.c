struct __declspec(align(4)) tagDVTARGETDEVICE
{
DWORD tdSize;
WORD tdDriverNameOffset;
WORD tdDeviceNameOffset;
WORD tdPortNameOffset;
WORD tdExtDevmodeOffset;
BYTE tdData[1];
};
