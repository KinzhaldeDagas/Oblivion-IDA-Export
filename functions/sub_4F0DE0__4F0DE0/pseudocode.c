// Verified 16-byte NiTPointerMap<unsigned int, BSSimpleList<TESObjectREFR *>> constructor used only by TESWorldSpace_IndexSubSpaceReference in this database. Initializes a bucket array with the caller's bucket count; SubSpace index passes 0x25 (37) buckets.
TESWorldSpaceSubSpaceMap *__thiscall TESWorldSpaceSubSpaceMap_ctor(
        TESWorldSpaceSubSpaceMap *this,
        unsigned int bucketCount)
{
  MEF_U32PointerMapEntry32 **v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  this->bucketCount = bucketCount; /*0x4f0de9*/
  this->vtable = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable'; /*0x4f0df6*/
  this->itemCount = 0; /*0x4f0dfc*/
  v3 = (MEF_U32PointerMapEntry32 **)FormHeapAlloc((unsigned __int64)bucketCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * bucketCount);
  v5 = 4 * this->bucketCount; /*0x4f0e14*/
  this->buckets = v3; /*0x4f0e18*/
  _memset((int)v3, 0, v5); /*0x4f0e1b*/
  this->vtable = &NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable'; /*0x4f0e23*/
  return this; /*0x4f0e2b*/
}
