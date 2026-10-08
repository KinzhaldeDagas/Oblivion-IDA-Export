struct tagSUBHEAP
{
void *base;
SIZE_T size;
SIZE_T min_commit;
SIZE_T commitSize;
list entry;
tagHEAP *heap;
DWORD headerSize;
DWORD magic;
};
