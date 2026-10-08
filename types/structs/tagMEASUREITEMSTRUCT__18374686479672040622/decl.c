struct tagMEASUREITEMSTRUCT
{
UINT CtlType;
UINT CtlID;
UINT itemID;
UINT itemWidth;
UINT itemHeight;
__declspec(align(8)) ULONG_PTR itemData;
};
