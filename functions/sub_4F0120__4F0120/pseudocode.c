// Verified: persistent-cell reference indexer routes kFormType_SubSpace references into referencesByCell (+0x64), alongside the other explicit eligible base types. This +0x64 index supports reattachment to exterior cells; the separate +0x60 SubSpace bounds index is built later by TESWorldSpace_IndexPersistentCellSubSpaces.
void __thiscall TESWorldSpace_IndexReference(TESWorldSpace *this, TESObjectREFR *reference)
{
  TESObjectREFR *v2; // esi
  float *v4; // eax
  int v5; // edi
  TESWorldSpaceCellReferenceMap *p_referencesByCell; // ebx
  TESObjectREFR *v7; // ebp
  TESObjectREFR *v8; // eax

  v2 = reference; /*0x4f0122*/
  if ( reference ) /*0x4f012a*/
  {
    if ( (reference->member.super.flags & 0x4000) == 0 ) /*0x4f0138*/
    {
      NiEnterCriticalSection(&g_TESWorldSpaceReferenceIndexLock, (int)&unk_A2F830); /*0x4f0148*/
      if ( TESWorldSpace_UsesCoordinateReferenceIndex(v2) ) /*0x4f014e*/
      {
        v4 = v2->vtbl->GetPos(v2); /*0x4f017e*/
        v5 = TESWorldSpace_PackCellCoordinates(v4); /*0x4f018e*/
        p_referencesByCell = &this->referencesByCell; /*0x4f0190*/
        reference = 0; /*0x4f0196*/
        NiTMap_GetAt(p_referencesByCell, v5, &reference); /*0x4f019e*/
        v7 = reference; /*0x4f01a3*/
        if ( !reference ) /*0x4f01a9*/
        {
          v8 = (TESObjectREFR *)FormHeapAlloc(8u); /*0x4f01ad*/
          if ( v8 ) /*0x4f01b7*/
          {
            v8->vtbl = 0; /*0x4f01b9*/
            *(_DWORD *)&v8->member.super.type = 0; /*0x4f01bb*/
          }
          else
          {
            v8 = 0; /*0x4f01c0*/
          }
          v7 = v8; /*0x4f01c6*/
          NiTMap_SetAt(p_referencesByCell, v5, (int)v8); /*0x4f01c8*/
        }
        BSSimpleList_PushFront(v7, (int)v2); /*0x4f01d0*/
        NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&g_TESWorldSpaceReferenceIndexLock); /*0x4f01dc*/
      }
      else
      {
        BSSimpleList_PushFront(&this->fallbackReferences.firstReference, (int)v2); /*0x4f015e*/
        NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&g_TESWorldSpaceReferenceIndexLock); /*0x4f0168*/
      }
    }
  }
}
