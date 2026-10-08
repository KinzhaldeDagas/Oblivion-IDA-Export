struct FaceGenPointerArray
{
void *vtable;
void **data;
unsigned __int16 capacity;
unsigned __int16 firstFree;
unsigned __int16 objectCount;
unsigned __int16 growSize;
};
