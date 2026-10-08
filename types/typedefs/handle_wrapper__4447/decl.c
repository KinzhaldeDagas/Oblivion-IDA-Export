struct handle_wrapper
{
LONG ref;
HGLOBAL hglobal;
ULONG size;
BOOL delete_on_release;
};
