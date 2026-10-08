struct packed_HELPINFO
{
UINT cbSize;
INT iContextType;
INT iCtrlId;
user_handle_t hItemHandle;
DWORD __pad;
__declspec(align(8)) ULONGLONG dwContextId;
POINT MousePos;
};
