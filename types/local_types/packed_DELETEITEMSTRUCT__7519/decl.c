struct packed_DELETEITEMSTRUCT
{
UINT CtlType;
UINT CtlID;
UINT itemID;
user_handle_t hwndItem;
DWORD __pad;
__declspec(align(8)) ULONGLONG itemData;
};
