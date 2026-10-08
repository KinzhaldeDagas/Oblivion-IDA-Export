struct __declspec(align(8)) DIBSECTION
{
BITMAP dsBm;
BITMAPINFOHEADER dsBmih;
DWORD dsBitfields[3];
HANDLE dshSection __offset(OFF64|AUTO);
DWORD dsOffset;
};
