struct packed_WINDOWPOS
{
user_handle_t hwnd;
DWORD __pad1;
user_handle_t hwndInsertAfter;
DWORD __pad2;
INT x;
INT y;
INT cx;
INT cy;
UINT flags;
DWORD __pad3;
};
