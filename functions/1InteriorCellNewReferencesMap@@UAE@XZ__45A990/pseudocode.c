//
// Verified: walks map values, frees 8-byte overflow list nodes, clears head ID, clears map then base pointer-map destructor. Vtable scalar destructor 45F090.
void __thiscall InteriorCellNewReferencesMap_dtor(InteriorCellNewReferencesMap *self)
{
  unsigned int v2; // eax
  bool v3; // zf
  InteriorCellNewReferencesMapEntry **buckets; // edx
  InteriorCellNewReferencesMapEntry **v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  void *valueOut; // [esp+10h] [ebp-1Ch] BYREF
  MEF_U32PointerMapEntry32 *position[2]; // [esp+14h] [ebp-18h] BYREF
  unsigned int keyOut; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v12; // [esp+28h] [ebp-4h]

  position[1] = (MEF_U32PointerMapEntry32 *)self; /*0x45a9b8*/
  self->vtable = &InteriorCellNewReferencesMap::`vftable'; /*0x45a9bc*/
  v2 = 0; /*0x45a9c2*/
  v3 = self->bucketCount == 0; /*0x45a9c4*/
  v12 = 0; /*0x45a9c7*/
  if ( v3 ) /*0x45a9cf*/
  {
LABEL_5:
    v6 = 0; /*0x45a9ea*/
  }
  else
  {
    buckets = self->buckets; /*0x45a9d1*/
    v5 = buckets; /*0x45a9d4*/
    while ( !*v5 ) /*0x45a9d9*/
    {
      ++v2; /*0x45a9df*/
      ++v5; /*0x45a9e2*/
      if ( v2 >= self->bucketCount ) /*0x45a9e8*/
        goto LABEL_5; /*0x45a9e8*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)buckets[v2]; /*0x45aa75*/
  }
  position[0] = v6; /*0x45a9ee*/
  while ( position[0] ) /*0x45a9f2*/
  {
    valueOut = 0; /*0x45aa05*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)self, position, &keyOut, &valueOut); /*0x45aa0d*/
    v7 = valueOut; /*0x45aa12*/
    if ( valueOut ) /*0x45aa18*/
    {
      if ( *((_DWORD *)valueOut + 1) ) /*0x45aa1a*/
      {
        do /*0x45aa34*/
        {
          v8 = *(_DWORD *)(v7[1] + 4); /*0x45aa23*/
          FormHeapFree(v7[1]); /*0x45aa27*/
          v7[1] = v8; /*0x45aa31*/
        }
        while ( v8 ); /*0x45aa34*/
      }
      *v7 = 0; /*0x45aa37*/
      FormHeapFree((unsigned int)v7); /*0x45aa3d*/
    }
  }
  NiTMap_Clear(self); /*0x45aa4e*/
  v12 = 0xFFFFFFFF; /*0x45aa55*/
  NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>::~NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>((unsigned int *)self); /*0x45aa5d*/
}
