struct tagCOMPAREITEMSTRUCT
{
UINT CtlType;
UINT CtlID;
HWND hwndItem;
UINT itemID1;
__declspec(align(8)) ULONG_PTR itemData1;
UINT itemID2;
__declspec(align(8)) ULONG_PTR itemData2;
DWORD dwLocaleId;
};
