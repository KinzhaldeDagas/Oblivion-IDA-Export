struct __declspec(align(8)) DLG_TEMPLATE
{
DWORD style;
DWORD exStyle;
DWORD helpId;
UINT16 nbItems;
INT16 x;
INT16 y;
INT16 cx;
INT16 cy;
LPCWSTR menuName __offset(OFF64|AUTO);
LPCWSTR className __offset(OFF64|AUTO);
LPCWSTR caption __offset(OFF64|AUTO);
INT16 pointSize;
WORD weight;
BOOL italic;
LPCWSTR faceName __offset(OFF64|AUTO);
BOOL dialogEx;
};
