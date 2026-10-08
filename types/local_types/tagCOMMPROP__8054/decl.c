struct __declspec(align(4)) tagCOMMPROP
{
WORD wPacketLength;
WORD wPacketVersion;
DWORD dwServiceMask;
DWORD dwReserved1;
DWORD dwMaxTxQueue;
DWORD dwMaxRxQueue;
DWORD dwMaxBaud;
DWORD dwProvSubType;
DWORD dwProvCapabilities;
DWORD dwSettableParams;
DWORD dwSettableBaud;
WORD wSettableData;
WORD wSettableStopParity;
DWORD dwCurrentTxQueue;
DWORD dwCurrentRxQueue;
DWORD dwProvSpec1;
DWORD dwProvSpec2;
WCHAR_0 wcProvChar[1];
};
