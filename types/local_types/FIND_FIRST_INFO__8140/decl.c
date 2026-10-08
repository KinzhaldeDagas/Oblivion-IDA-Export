struct __declspec(align(4)) FIND_FIRST_INFO
{
DWORD magic;
HANDLE handle;
CRITICAL_SECTION cs;
FINDEX_SEARCH_OPS search_op;
FINDEX_INFO_LEVELS level;
UNICODE_STRING path;
BOOL is_root;
BOOL wildcard;
UINT data_pos;
UINT data_len;
UINT data_size;
BYTE data[1];
};
