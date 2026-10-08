// Verified: symmetric removal from the coordinate-indexed list or fallbackReferences under the shared WorldSpace reference-index critical section; removes an empty per-cell list/map entry.
void __thiscall TESWorldSpace_RemoveIndexedReference(TESWorldSpace *this, TESObjectREFR *reference)
{
  TESObjectREFR *v2; // esi
  float *v4; // eax
  int v5; // ebx
  TESWorldSpaceCellReferenceMap *p_referencesByCell; // ebp
  TESObjectREFR *v7; // edi

  v2 = reference; /*0x4f01f2*/
  if ( reference ) /*0x4f01fa*/
  {
    if ( (reference->member.super.flags & 0x4000) == 0 ) /*0x4f0208*/
    {
      NiEnterCriticalSection(&g_TESWorldSpaceReferenceIndexLock, (int)&unk_A2F830); /*0x4f0218*/
      if ( TESWorldSpace_UsesCoordinateReferenceIndex(v2) ) /*0x4f021e*/
      {
        v4 = v2->vtbl->GetPos(v2); /*0x4f024e*/
        v5 = sub_4EFE40(v4); /*0x4f025e*/
        p_referencesByCell = &this->referencesByCell; /*0x4f0260*/
        reference = 0; /*0x4f0266*/
        NiTMap_GetAt(p_referencesByCell, v5, &reference); /*0x4f026e*/
        v7 = reference; /*0x4f0273*/
        if ( reference ) /*0x4f0279*/
        {
          BSSimpleList_Remove((int *)reference, (int)v2); /*0x4f027e*/
          if ( !*(_DWORD *)&v7->member.super.type && !v7->vtbl ) /*0x4f0289*/
          {
            FormHeapFree((unsigned int)v7); /*0x4f028f*/
            NiTMap_RemoveAt(p_referencesByCell, v5); /*0x4f029a*/
          }
        }
        NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&g_TESWorldSpaceReferenceIndexLock); /*0x4f02a6*/
      }
      else
      {
        BSSimpleList_Remove((int *)&this->fallbackReferences, (int)v2); /*0x4f022e*/
        NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&g_TESWorldSpaceReferenceIndexLock); /*0x4f0238*/
      }
    }
  }
}
