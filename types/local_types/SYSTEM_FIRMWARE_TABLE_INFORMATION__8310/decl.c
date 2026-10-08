struct __declspec(align(4)) _SYSTEM_FIRMWARE_TABLE_INFORMATION
{
ULONG ProviderSignature;
SYSTEM_FIRMWARE_TABLE_ACTION Action;
ULONG TableID;
ULONG TableBufferLength;
UCHAR TableBuffer[1];
};
