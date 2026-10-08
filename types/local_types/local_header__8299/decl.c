struct __unaligned __declspec(align(4)) local_header
{
WORD magic;
void *ptr;
BYTE flags;
BYTE lock;
local_header *next;
};
