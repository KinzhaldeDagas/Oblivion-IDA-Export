struct MEF_U32PointerMapLayout32
{
void **vtable;
unsigned int bucketCount;
MEF_U32PointerMapEntry32 **buckets;
unsigned int entryCount;
};
