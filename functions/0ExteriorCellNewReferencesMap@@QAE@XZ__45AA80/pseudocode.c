//
// Verified: 37-bucket map; 0x94-byte zeroed bucket table; value type BSSimpleList<ExteriorCellReferenceData*>*. RTTI-backed vtable at A3A330. Probable Fallout homolog ctor 82601C58; role matches, record format differs.
ExteriorCellNewReferencesMap *__thiscall ExteriorCellNewReferencesMap_ctor(ExteriorCellNewReferencesMap *self)
{
  ExteriorCellNewReferencesMapEntry **v2; // eax
  unsigned int v4; // [esp-8h] [ebp-Ch]

  self->bucketCount = 0x25; /*0x45aa8a*/
  self->vtable = (ExteriorCellNewReferencesMapVtable *)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::`vftable'; /*0x45aa97*/
  self->entryCount = 0; /*0x45aa9d*/
  v2 = (ExteriorCellNewReferencesMapEntry **)FormHeapAlloc(0x94u); /*0x45aaa9*/
  v4 = 4 * self->bucketCount; /*0x45aab5*/
  self->buckets = v2; /*0x45aab9*/
  _memset((int)v2, 0, v4); /*0x45aabc*/
  self->vtable = &ExteriorCellNewReferencesMap::`vftable'; /*0x45aac4*/
  return self; /*0x45aacc*/
}
