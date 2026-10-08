struct __declspec(align(2)) FDSA_info
{
DWORD num_items;
void *mem;
DWORD blocks_alloced;
BYTE inc;
BYTE block_size;
BYTE flags;
};
