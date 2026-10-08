struct packed_DRAWITEMSTRUCT
{
UINT CtlType;
UINT CtlID;
UINT itemID;
UINT itemAction;
UINT itemState;
user_handle_t hwndItem;
DWORD __pad1;
user_handle_t hDC;
DWORD __pad2;
RECT rcItem;
__declspec(align(8)) ULONGLONG itemData;
};
