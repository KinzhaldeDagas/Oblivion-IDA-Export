//
// Verified: iterates every map value, frees nonnull entry+4 savedFormBuffer via MemoryHeap_Free_checked, frees entry via FormHeapFree, then NiTMap_Clear. Called by ChangesMap destructor 45F050. Probable homolog Fallout 825ED9D0.
// Verified: eighth ChangesMap virtual slot +0x1C at A3A308. Destructor entry is 45F030 (call to this function at 45F066).
void __thiscall ChangesMap_RemoveAllChanges(ChangesMap *self)
{
  unsigned int bucketCount; // edx
  unsigned int v3; // eax
  OblivionChangesMapNode **buckets; // esi
  OblivionChangesMapNode **v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  void *v7; // esi
  void *valueOut; // [esp+8h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  bucketCount = self->bucketCount; /*0x45a8b7*/
  v3 = 0; /*0x45a8ba*/
  if ( bucketCount ) /*0x45a8be*/
  {
    buckets = self->buckets; /*0x45a8c0*/
    v5 = buckets; /*0x45a8c3*/
    while ( !*v5 ) /*0x45a8c8*/
    {
      ++v3; /*0x45a8ca*/
      ++v5; /*0x45a8cd*/
      if ( v3 >= bucketCount ) /*0x45a8d2*/
        goto LABEL_5; /*0x45a8d2*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)buckets[v3]; /*0x45a934*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x45a8d4*/
  }
  position = v6; /*0x45a8d8*/
  while ( position ) /*0x45a8dc*/
  {
    valueOut = 0; /*0x45a8f1*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)self, &position, &keyOut, &valueOut); /*0x45a8f9*/
    v7 = valueOut; /*0x45a8fe*/
    if ( valueOut ) /*0x45a904*/
    {
      if ( *((_DWORD *)valueOut + 1) ) /*0x45a906*/
        MemoryHeap_Free_checked(*((void **)valueOut + 1)); /*0x45a913*/
      FormHeapFree((unsigned int)v7); /*0x45a919*/
    }
  }
  NiTMap_Clear(self); /*0x45a92f*/
}
