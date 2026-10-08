struct NiTArray_NiAVObject
{
void **_vtbl;
NiAVObject **data;
UInt16 capacity;
UInt16 end;
UInt16 numObjs;
UInt16 growSize;
};
