// Verified clears TESPathGrid.pointsByReference (+0x34), the map from TESObjectREFR* keys to BSSimpleList<TESPathGridPoint*> values. Frees the list nodes and headers, then calls NiTMap_Clear; it does not destroy referenced forms or point objects. Called only by TESPathGrid_ClearPointsAndReferenceMaps while the pathgrid critical section is held.
int __thiscall TESPathGrid_ClearPointsByReference(TESPathGrid *this)
{
  unsigned int bucketCount; // edx
  MEF_U32PointerMapLayout32 *p_pointsByReference; // ebx
  unsigned int v3; // eax
  void **buckets; // esi
  void **v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  void *valueOut; // [esp+8h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  bucketCount = this->pointsByReference.bucketCount; /*0x4e5040*/
  p_pointsByReference = (MEF_U32PointerMapLayout32 *)&this->pointsByReference; /*0x4e5047*/
  v3 = 0; /*0x4e504a*/
  if ( bucketCount ) /*0x4e504f*/
  {
    buckets = this->pointsByReference.buckets; /*0x4e5051*/
    v5 = buckets; /*0x4e5054*/
    while ( !*v5 ) /*0x4e5059*/
    {
      ++v3; /*0x4e505b*/
      ++v5; /*0x4e505e*/
      if ( v3 >= bucketCount ) /*0x4e5063*/
        goto LABEL_5; /*0x4e5063*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)buckets[v3]; /*0x4e50d9*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x4e5065*/
  }
  position = v6; /*0x4e5069*/
  while ( position ) /*0x4e506d*/
  {
    valueOut = 0; /*0x4e5081*/
    NiTMap_U32Pointer_GetNextEntry(p_pointsByReference, &position, &keyOut, &valueOut); /*0x4e5089*/
    v7 = valueOut; /*0x4e508e*/
    if ( valueOut ) /*0x4e5094*/
    {
      if ( *((_DWORD *)valueOut + 1) ) /*0x4e5096*/
      {
        do /*0x4e50b4*/
        {
          v8 = *(_DWORD *)(v7[1] + 4); /*0x4e50a3*/
          FormHeapFree(v7[1]); /*0x4e50a7*/
          v7[1] = v8; /*0x4e50b1*/
        }
        while ( v8 ); /*0x4e50b4*/
      }
      *v7 = 0; /*0x4e50b7*/
      FormHeapFree((unsigned int)v7); /*0x4e50bd*/
    }
  }
  return NiTMap_Clear(p_pointsByReference); /*0x4e50cd*/
}
