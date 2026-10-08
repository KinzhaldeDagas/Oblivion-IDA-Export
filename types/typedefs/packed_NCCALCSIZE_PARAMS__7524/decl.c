struct packed_NCCALCSIZE_PARAMS
{
RECT rgrc[3];
ULONGLONG __pad1;
user_handle_t hwnd;
DWORD __pad2;
user_handle_t hwndInsertAfter;
DWORD __pad3;
INT x;
INT y;
INT cx;
INT cy;
UINT flags;
DWORD __pad4;
};
