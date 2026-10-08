struct __declspec(align(8)) _GLOBAL_FLS_DATA
{
FLS_INFO_CHUNK *fls_callback_chunks[8];
LIST_ENTRY fls_list_head;
ULONG fls_high_index;
};
