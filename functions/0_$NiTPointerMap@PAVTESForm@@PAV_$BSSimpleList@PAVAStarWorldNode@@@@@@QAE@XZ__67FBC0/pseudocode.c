// Verified inner map constructor and vtable identity: NiTPointerMap<TESForm*,BSSimpleList<AStarWorldNode*>*>; initializes vtable, bucket count, zeroed bucket-head array, and entry count.
LowPathSpaceNodeMap *__thiscall NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(
        LowPathSpaceNodeMap *this,
        unsigned int bucketCount)
{
  void *v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  this->bucketCount = bucketCount; /*0x67fbc9*/
  this->vtable = &NiTMapBase<NiTPointerAllocator<unsigned int>,TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable'; /*0x67fbd6*/
  this->entryCount = 0; /*0x67fbdc*/
  v3 = (void *)FormHeapAlloc((unsigned __int64)bucketCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * bucketCount);
  v5 = 4 * this->bucketCount; /*0x67fbf4*/
  this->buckets = v3; /*0x67fbf8*/
  _memset((int)v3, 0, v5); /*0x67fbfb*/
  this->vtable = &NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable'; /*0x67fc03*/
  return this; /*0x67fc0b*/
}
