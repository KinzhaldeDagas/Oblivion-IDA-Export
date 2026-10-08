// Verified outer map constructor and vtable identity: NiTPointerMap<TESForm*,NiTPointerMap<TESForm*,BSSimpleList<AStarWorldNode*>*>*>; initializes vtable, bucket count, zeroed bucket-head array, and entry count.
LowPathWorldDoorLinkMap *__thiscall NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>(
        LowPathWorldDoorLinkMap *this,
        unsigned int bucketCount)
{
  void *v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  this->bucketCount = bucketCount; /*0x67fb79*/
  this->vtable = &NiTMapBase<NiTPointerAllocator<unsigned int>,TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'; /*0x67fb86*/
  this->entryCount = 0; /*0x67fb8c*/
  v3 = (void *)FormHeapAlloc((unsigned __int64)bucketCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * bucketCount);
  v5 = 4 * this->bucketCount; /*0x67fba4*/
  this->buckets = v3; /*0x67fba8*/
  _memset((int)v3, 0, v5); /*0x67fbab*/
  this->vtable = &NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'; /*0x67fbb3*/
  return this; /*0x67fbbb*/
}
