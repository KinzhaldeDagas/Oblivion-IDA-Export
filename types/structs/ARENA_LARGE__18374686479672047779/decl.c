struct ARENA_LARGE
{
list entry;
SIZE_T data_size;
SIZE_T block_size;
DWORD pad[2];
DWORD size;
DWORD magic;
};
