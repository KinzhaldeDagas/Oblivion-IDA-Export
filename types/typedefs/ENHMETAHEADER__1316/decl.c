struct ENHMETAHEADER
{
DWORD iType;
DWORD nSize;
RECTL rclBounds;
RECTL rclFrame;
DWORD dSignature;
DWORD nVersion;
DWORD nBytes;
DWORD nRecords;
WORD nHandles;
WORD sReserved;
DWORD nDescription;
DWORD offDescription;
DWORD nPalEntries;
SIZEL szlDevice;
SIZEL szlMillimeters;
DWORD cbPixelFormat;
DWORD offPixelFormat;
DWORD bOpenGL;
SIZEL szlMicrometers;
};
