// Verified: replays coordinate-bucketed +0x64 references and spatially tests fallback references when attaching references to an exterior cell. This is the persistent-reference lifecycle, distinct from the SubSpace spatial lookup map at +0x60.
void __thiscall TESWorldSpace_AttachIndexedReferencesToCell(TESWorldSpace *this, TESObjectCELL *cell)
{
  TESObjectCELL *v2; // edi
  unsigned __int16 YCoordinate; // si
  __int16 XCoordinate; // ax
  TESObjectCELL *i; // esi
  TESWorldSpaceCellReferenceList *p_fallbackReferences; // esi
  TESObjectREFR *firstReference; // ebx
  float *v9; // eax

  v2 = cell; /*0x4f03f2*/
  if ( cell ) /*0x4f03fa*/
  {
    NiEnterCriticalSection(&g_TESWorldSpaceReferenceIndexLock, (int)&unk_A2F830); /*0x4f040b*/
    YCoordinate = TESObjectCELL_GetYCoordinate(v2); /*0x4f0419*/
    XCoordinate = TESObjectCELL_GetXCoordinate(v2); /*0x4f041c*/
    cell = 0; /*0x4f0435*/
    NiTMap_GetAt(&this->referencesByCell.vtable, (XCoordinate << 0x10) | YCoordinate, &cell); /*0x4f043d*/
    for ( i = cell; i; i = *(TESObjectCELL **)&i->members.super.type ) /*0x4f0448*/
    {
      if ( !*(_DWORD *)&i->members.super.type && !i->vtbl ) /*0x4f0456*/
        break; /*0x4f0459*/
      TESObjectCELL_AddReference(v2, (TESObjectREFR *)i->vtbl); /*0x4f0460*/
    }
    p_fallbackReferences = &this->fallbackReferences; /*0x4f046c*/
    if ( this != (TESWorldSpace *)0xFFFFFF8C ) /*0x4f0471*/
    {
      do /*0x4f04b0*/
      {
        if ( !p_fallbackReferences->overflowNodes && !p_fallbackReferences->firstReference ) /*0x4f0479*/
          break; /*0x4f047c*/
        firstReference = p_fallbackReferences->firstReference; /*0x4f047e*/
        if ( (TESObjectCELL *)Shared_GetDwordAtOffset40(p_fallbackReferences->firstReference) != v2 ) /*0x4f0489*/
        {
          v9 = firstReference->vtbl->GetPos(firstReference); /*0x4f0495*/
          if ( sub_4CC540((int)v2, v9) ) /*0x4f049a*/
            TESObjectCELL_AddReference(v2, firstReference); /*0x4f04a6*/
        }
        p_fallbackReferences = (TESWorldSpaceCellReferenceList *)p_fallbackReferences->overflowNodes; /*0x4f04ab*/
      }
      while ( p_fallbackReferences ); /*0x4f04b0*/
    }
    NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&g_TESWorldSpaceReferenceIndexLock); /*0x4f04b7*/
  }
}
