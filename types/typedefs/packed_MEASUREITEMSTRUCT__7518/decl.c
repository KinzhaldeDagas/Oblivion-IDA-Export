struct packed_MEASUREITEMSTRUCT
{
UINT CtlType;
UINT CtlID;
UINT itemID;
UINT itemWidth;
UINT itemHeight;
__declspec(align(8)) ULONGLONG itemData;
};
