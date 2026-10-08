// Verified: under the shared critical section, frees fallbackReferences nodes and every per-coordinate BSSimpleList payload/head in referencesByCell, then clears the map.
int __thiscall TESWorldSpace_ClearReferenceIndex(TESWorldSpace *this)
{
  TESWorldSpaceCellReferenceNode *next; // edi
  MEF_U32PointerMapLayout32 *p_referencesByCell; // ebx
  unsigned int bucketCount; // edx
  unsigned int v5; // eax
  unsigned int itemCount; // esi
  MEF_U32PointerMapEntry32 **buckets; // ecx
  MEF_U32PointerMapEntry32 *v8; // eax
  _DWORD *v9; // esi
  int v10; // edi
  void *valueOut; // [esp+Ch] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+10h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+14h] [ebp-4h] BYREF

  NiEnterCriticalSection(&g_TESWorldSpaceReferenceIndexLock, (int)&unk_A2F830); /*0x4f02c2*/
  if ( this->fallbackReferences.overflowNodes ) /*0x4f02c7*/
  {
    do /*0x4f02e4*/
    {
      next = this->fallbackReferences.overflowNodes->next; /*0x4f02d3*/
      FormHeapFree((unsigned int)this->fallbackReferences.overflowNodes); /*0x4f02d7*/
      this->fallbackReferences.overflowNodes = next; /*0x4f02e1*/
    }
    while ( next ); /*0x4f02e4*/
  }
  p_referencesByCell = (MEF_U32PointerMapLayout32 *)&this->referencesByCell; /*0x4f02e6*/
  this->fallbackReferences.firstReference = 0; /*0x4f02e9*/
  bucketCount = this->referencesByCell.bucketCount; /*0x4f02f0*/
  v5 = 0; /*0x4f02f3*/
  if ( bucketCount ) /*0x4f02f7*/
  {
    itemCount = this->referencesByCell.itemCount; /*0x4f02f9*/
    buckets = p_referencesByCell->buckets; /*0x4f02fc*/
    while ( !*buckets ) /*0x4f0303*/
    {
      ++v5; /*0x4f0309*/
      ++buckets; /*0x4f030c*/
      if ( v5 >= bucketCount ) /*0x4f0311*/
        goto LABEL_7; /*0x4f0311*/
    }
    v8 = *(MEF_U32PointerMapEntry32 **)(itemCount + 4 * v5); /*0x4f0393*/
  }
  else
  {
LABEL_7:
    v8 = 0; /*0x4f0313*/
  }
  position = v8; /*0x4f0317*/
  while ( position ) /*0x4f031b*/
  {
    valueOut = 0; /*0x4f0331*/
    NiTMap_U32Pointer_GetNextEntry(p_referencesByCell, &position, &keyOut, &valueOut); /*0x4f0339*/
    v9 = valueOut; /*0x4f033e*/
    if ( valueOut ) /*0x4f0344*/
    {
      if ( *((_DWORD *)valueOut + 1) ) /*0x4f0346*/
      {
        do /*0x4f0364*/
        {
          v10 = *(_DWORD *)(v9[1] + 4); /*0x4f0353*/
          FormHeapFree(v9[1]); /*0x4f0357*/
          v9[1] = v10; /*0x4f0361*/
        }
        while ( v10 ); /*0x4f0364*/
      }
      *v9 = 0; /*0x4f0367*/
      FormHeapFree((unsigned int)v9); /*0x4f036d*/
    }
  }
  NiTMap_Clear(p_referencesByCell); /*0x4f037e*/
  return NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&g_TESWorldSpaceReferenceIndexLock); /*0x4f0383*/
}
