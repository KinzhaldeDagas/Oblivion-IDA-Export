struct _FILEMUIINFO
{
DWORD dwSize;
DWORD dwVersion;
DWORD dwFileType;
BYTE pChecksum[16];
BYTE pServiceChecksum[16];
DWORD dwLanguageNameOffset;
DWORD dwTypeIDMainSize;
DWORD dwTypeIDMainOffset;
DWORD dwTypeNameMainOffset;
DWORD dwTypeIDMUISize;
DWORD dwTypeIDMUIOffset;
DWORD dwTypeNameMUIOffset;
BYTE abBuffer[8];
};
