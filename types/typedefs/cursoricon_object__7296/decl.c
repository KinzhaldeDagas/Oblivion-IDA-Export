struct __declspec(align(8)) cursoricon_object
{
user_object obj;
list entry;
ULONG_PTR param;
HMODULE module;
LPWSTR resname;
HRSRC rsrc;
BOOL is_icon;
BOOL is_ani;
UINT delay;
POINT hotspot;
};
