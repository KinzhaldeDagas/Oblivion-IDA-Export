struct builtin_class_descr
{
LPCWSTR name __offset(OFF64|AUTO);
UINT style;
builtin_winprocs proc;
INT extra;
__declspec(align(8)) ULONG_PTR cursor;
HBRUSH brush __offset(OFF64|AUTO);
};
