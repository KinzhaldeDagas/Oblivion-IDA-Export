struct value_entW
{
LPWSTR ve_valuename;
DWORD ve_valuelen;
__declspec(align(8)) DWORD_PTR ve_valueptr;
DWORD ve_type;
};
