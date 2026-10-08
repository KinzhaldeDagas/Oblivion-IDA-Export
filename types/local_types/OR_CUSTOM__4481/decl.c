struct OR_CUSTOM
{
CLSID clsid;
ULONG cbExtension;
ULONG size;
byte *pData __offset(OFF64|AUTO);
};
