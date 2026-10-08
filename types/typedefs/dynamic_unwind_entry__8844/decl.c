struct dynamic_unwind_entry
{
list entry;
ULONG_PTR base;
ULONG_PTR end;
RUNTIME_FUNCTION *table;
DWORD count;
DWORD max_count;
PGET_RUNTIME_FUNCTION_CALLBACK callback;
PVOID context;
};
