struct _wfinddata64_t
{
unsigned int attrib;
__declspec(align(8)) __time64_t time_create;
__time64_t time_access;
__time64_t time_write;
__int64 size;
wchar_t name[260];
};
