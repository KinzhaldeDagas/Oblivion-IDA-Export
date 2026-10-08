struct packed_MDICREATESTRUCTW
{
ULONGLONG szClass;
ULONGLONG szTitle;
ULONGLONG hOwner;
INT x;
INT y;
INT cx;
INT cy;
DWORD style;
__declspec(align(8)) ULONGLONG lParam;
};
