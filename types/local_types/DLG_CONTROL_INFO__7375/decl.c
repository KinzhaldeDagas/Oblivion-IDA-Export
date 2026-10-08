struct DLG_CONTROL_INFO
{
DWORD style;
DWORD exStyle;
DWORD helpId;
INT16 x;
INT16 y;
INT16 cx;
INT16 cy;
__declspec(align(8)) UINT_PTR_0 id;
LPCWSTR className;
LPCWSTR windowName;
LPCVOID data;
};
