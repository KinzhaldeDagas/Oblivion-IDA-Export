struct __declspec(align(8)) allocator
{
IMalloc_0 IMalloc_iface;
IMallocSpy_0 *spy __offset(OFF64|AUTO);
DWORD spyed_allocations;
BOOL spy_release_pending;
void **blocks __offset(OFF64|AUTO);
DWORD blocks_length;
};
