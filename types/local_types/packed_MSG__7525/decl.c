struct packed_MSG
{
user_handle_t hwnd;
DWORD __pad1;
UINT message;
__declspec(align(8)) ULONGLONG wParam;
ULONGLONG lParam;
DWORD time;
POINT pt;
DWORD __pad2;
};
