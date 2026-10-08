//
// Verified: 37-bucket map; 0x94-byte zeroed bucket table; value type BSSimpleList<unsigned int>*. RTTI-backed vtable at A3A310. Probable Fallout homolog ctor 82601B90; shared bucket count and key/value role.
InteriorCellNewReferencesMap *__thiscall InteriorCellNewReferencesMap_ctor(InteriorCellNewReferencesMap *self)
{
  InteriorCellNewReferencesMapEntry **v2; // eax
  unsigned int v4; // [esp-8h] [ebp-Ch]

  self->bucketCount = 0x25; /*0x45a94a*/
  self->vtable = (InteriorCellNewReferencesMapVtable *)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<unsigned int> *>::`vftable'; /*0x45a957*/
  self->entryCount = 0; /*0x45a95d*/
  v2 = (InteriorCellNewReferencesMapEntry **)FormHeapAlloc(0x94u); /*0x45a969*/
  v4 = 4 * self->bucketCount; /*0x45a975*/
  self->buckets = v2; /*0x45a979*/
  _memset((int)v2, 0, v4); /*0x45a97c*/
  self->vtable = &InteriorCellNewReferencesMap::`vftable'; /*0x45a984*/
  return self; /*0x45a98c*/
}
