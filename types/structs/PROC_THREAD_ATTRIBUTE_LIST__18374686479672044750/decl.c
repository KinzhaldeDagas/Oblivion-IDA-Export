struct _PROC_THREAD_ATTRIBUTE_LIST
{
DWORD mask;
DWORD size;
DWORD count;
DWORD pad;
DWORD_PTR unk;
proc_thread_attr attrs[1];
};
