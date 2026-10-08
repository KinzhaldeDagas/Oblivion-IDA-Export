//
// Verified: frees each 12-byte ExteriorCellReferenceData record, overflow nodes, list head, then base map. Vtable scalar destructor 45F0B0.
void __thiscall ExteriorCellNewReferencesMap_dtor(ExteriorCellNewReferencesMap *self)
{
  unsigned int v2; // eax
  bool v3; // zf
  ExteriorCellNewReferencesMapEntry **buckets; // edx
  ExteriorCellNewReferencesMapEntry **v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  _DWORD *v7; // esi
  unsigned int *v8; // edi
  int v9; // edi
  void *valueOut; // [esp+10h] [ebp-1Ch] BYREF
  MEF_U32PointerMapEntry32 *position[2]; // [esp+14h] [ebp-18h] BYREF
  unsigned int keyOut; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v13; // [esp+28h] [ebp-4h]

  position[1] = (MEF_U32PointerMapEntry32 *)self; /*0x45aaf8*/
  self->vtable = &ExteriorCellNewReferencesMap::`vftable'; /*0x45aafc*/
  v2 = 0; /*0x45ab02*/
  v3 = self->bucketCount == 0; /*0x45ab04*/
  v13 = 0; /*0x45ab07*/
  if ( v3 ) /*0x45ab0f*/
  {
LABEL_5:
    v6 = 0; /*0x45ab2a*/
  }
  else
  {
    buckets = self->buckets; /*0x45ab11*/
    v5 = buckets; /*0x45ab14*/
    while ( !*v5 ) /*0x45ab19*/
    {
      ++v2; /*0x45ab1f*/
      ++v5; /*0x45ab22*/
      if ( v2 >= self->bucketCount ) /*0x45ab28*/
        goto LABEL_5; /*0x45ab28*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)buckets[v2]; /*0x45abd5*/
  }
  position[0] = v6; /*0x45ab2e*/
  while ( position[0] ) /*0x45ab32*/
  {
    valueOut = 0; /*0x45ab45*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)self, position, &keyOut, &valueOut); /*0x45ab4d*/
    v7 = valueOut; /*0x45ab52*/
    v8 = (unsigned int *)valueOut; /*0x45ab58*/
    if ( valueOut ) /*0x45ab5a*/
    {
      do /*0x45ab74*/
      {
        if ( *v8 ) /*0x45ab60*/
          FormHeapFree(*v8); /*0x45ab67*/
        v8 = (unsigned int *)v8[1]; /*0x45ab6f*/
      }
      while ( v8 ); /*0x45ab74*/
      if ( v7[1] ) /*0x45ab76*/
      {
        do /*0x45ab94*/
        {
          v9 = *(_DWORD *)(v7[1] + 4); /*0x45ab83*/
          FormHeapFree(v7[1]); /*0x45ab87*/
          v7[1] = v9; /*0x45ab91*/
        }
        while ( v9 ); /*0x45ab94*/
      }
      *v7 = 0; /*0x45ab97*/
      FormHeapFree((unsigned int)v7); /*0x45ab9d*/
    }
  }
  NiTMap_Clear(self); /*0x45abae*/
  v13 = 0xFFFFFFFF; /*0x45abb5*/
  NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::~NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>((unsigned int *)self); /*0x45abbd*/
}
