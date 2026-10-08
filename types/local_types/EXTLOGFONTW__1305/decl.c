struct __declspec(align(4)) EXTLOGFONTW
{
LOGFONTW elfLogFont;
WCHAR_0 elfFullName[64];
WCHAR_0 elfStyle[32];
DWORD elfVersion;
DWORD elfStyleSize;
DWORD elfMatch;
DWORD elfReserved;
BYTE elfVendorId[4];
DWORD elfCulture;
PANOSE elfPanose;
};
