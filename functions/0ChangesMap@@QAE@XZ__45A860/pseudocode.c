//
// Verified: ChangesMap identity from raw RTTI B05A38(+8 name), COL AB7C90, vtable A3A2EC; 16-byte allocation at 45B3D4, 5039 buckets (0x13AF), 0x4EBC-byte bucket storage. Probable homolog Fallout ctor 825EE088 with same bucket count and 16-byte layout.
// [2026-10-07 ChangesMap pass] Verified: RTTI class, 16-byte map, 12-byte nodes, 8-byte change entries, eight-slot vtable; ctor->manager ownership->add/set/find/remove->UnloadForm serialization->LoadForm consumption->RemoveAllChanges/dtor. Probable Fallout homologs: 825EE088 ctor,825EDC40 add,825EDD18 set,825EDDB0 buffer,825EDED8 remove flags,825ED9D0 clear,825F02A8 unload. Verified divergences recorded on 452D60 and 463A90. Candidate next targets: full save-flag normalization 4535A0; interior reference insertion 452E70, exterior reference insertion 452F10, exterior cell insertion 452FE0 and consuming restore paths. Unknown: original names of unresolved flag bits, complete manager layout, suspect BPL allocation-helper decompiler argument. No Fallout layout or enum imported.
ChangesMap *__thiscall ChangesMap::ChangesMap(ChangesMap *self)
{
  OblivionChangesMapNode **v2; // eax
  unsigned int v4; // [esp-8h] [ebp-Ch]

  self->bucketCount = 0x13AF; /*0x45a86a*/
  self->vtbl = (OblivionChangesMapVtable *)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,ChangeData *>::`vftable'; /*0x45a877*/
  self->entryCount = 0; /*0x45a87d*/
  v2 = (OblivionChangesMapNode **)FormHeapAlloc(0x4EBCu); /*0x45a889*/
  v4 = 4 * self->bucketCount; /*0x45a895*/
  self->buckets = v2; /*0x45a899*/
  _memset((int)v2, 0, v4); /*0x45a89c*/
  self->vtbl = &ChangesMap::`vftable'; /*0x45a8a4*/
  return self; /*0x45a8ac*/
}
