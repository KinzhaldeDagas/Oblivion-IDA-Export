struct packed_COMPAREITEMSTRUCT
{
UINT CtlType;
UINT CtlID;
user_handle_t hwndItem;
DWORD __pad1;
UINT itemID1;
__declspec(align(8)) ULONGLONG itemData1;
UINT itemID2;
__declspec(align(8)) ULONGLONG itemData2;
DWORD dwLocaleId;
DWORD __pad2;
};
