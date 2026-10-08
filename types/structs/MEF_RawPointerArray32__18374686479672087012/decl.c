struct MEF_RawPointerArray32
{
void **vtable;
void **data;
unsigned int capacity;
unsigned int usedEnd;
unsigned int occupiedCount;
unsigned int growBy;
};
