struct __WINE_HIDP_PREPARSED_DATA
{
DWORD magic;
DWORD dwSize;
HIDP_CAPS caps;
HIDP_CAPS new_caps;
DWORD elementOffset;
DWORD reportCount[3];
BYTE reportIdx[3][256];
DWORD value_caps_offset;
USHORT value_caps_count[3];
WINE_HID_REPORT reports[1];
};
