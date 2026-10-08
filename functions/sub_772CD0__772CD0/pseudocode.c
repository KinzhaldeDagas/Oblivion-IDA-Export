// Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
// DX11 refresh verification: updates existing state value in place; when save-list category differs, removes/reinserts at opposite list head. Never append a refreshed bias write blindly after the captured program: preserve existing unique non-saving node position or reject ambiguous ordering.
// DX11 state-group audit 2026-10-01: existing entry updates value in place; a save-category change unlinks and inserts the same node at the destination head. Removal helpers clear links, including when destination is empty. Absent ID consumes entry pool B427AC (growing via772A80 if empty); group/node allocation is a separate lifecycle requirement. Ordinary168/175/195 all request no-save, so only first updates can alter links; later calls only change values. Under exclusive observer/writer ownership, final metadata can coalesce to last accepted bias values while per-draw DX11 programs keep each occurrence value.
// DX11 pool audit 2026-10-01: missing entries use the same first/last pool pop from B427AC, then overwrite all16 bytes of node state/value/next/previous before linking at list head. Old free-node links may be stale and must not be traversed. Available-stock adoption can be modeled as guarded CPU stores only under exclusive pool writer/observer ownership; growth remains separate.
char __thiscall NiD3DRenderStateGroup_SetRenderState(
        OblivionRenderStateGroupPrefix *this,
        unsigned int state,
        unsigned int a3,
        unsigned __int8 a4)
{
  OblivionRenderStateEntry *RenderStateEntry; // edi
  OblivionRenderStateEntry *NoSaveHead08; // eax
  bool v7; // zf
  unsigned int *v8; // ecx
  unsigned int *p_FreeCount08; // edi
  OblivionRenderStatePoolPrefix *v10; // ebp
  _DWORD *v11; // ebx
  void **FreeObjects00; // ecx
  OblivionRenderStateEntry *SavedHead10; // ecx
  OblivionRenderStateEntry *v14; // ecx
  unsigned __int8 savePrevious; // [esp+Fh] [ebp-1h] BYREF

  savePrevious = 0; /*0x772ce2*/
  RenderStateEntry = NiD3DRenderStateGroup_FindRenderStateEntry(this, state, &savePrevious); /*0x772cec*/
  if ( RenderStateEntry ) /*0x772cf2*/
  {
    LOBYTE(NoSaveHead08) = savePrevious; /*0x772cf4*/
    v7 = savePrevious == a4; /*0x772cf8*/
    RenderStateEntry->Value04 = a3; /*0x772d00*/
    if ( !v7 ) /*0x772d03*/
    {
      if ( (_BYTE)NoSaveHead08 ) /*0x772d0e*/
      {
        NiD3DRenderStateGroup_RemoveSavedEntry(this, RenderStateEntry); /*0x772d10*/
        NoSaveHead08 = this->NoSaveHead08; /*0x772d15*/
        if ( NoSaveHead08 ) /*0x772d1a*/
        {
          NoSaveHead08->Previous0C = RenderStateEntry; /*0x772d1c*/
          NoSaveHead08 = this->NoSaveHead08; /*0x772d1f*/
          RenderStateEntry->Next08 = NoSaveHead08; /*0x772d22*/
        }
        RenderStateEntry->Previous0C = 0; /*0x772d25*/
        ++this->NoSaveCount04; /*0x772d28*/
        this->NoSaveHead08 = RenderStateEntry; /*0x772d2c*/
      }
      else
      {
        NiD3DRenderStateGroup_RemoveNoSaveEntry(this, RenderStateEntry); /*0x772d36*/
        NoSaveHead08 = this->SavedHead10; /*0x772d3b*/
        if ( NoSaveHead08 ) /*0x772d40*/
        {
          NoSaveHead08->Previous0C = RenderStateEntry; /*0x772d42*/
          RenderStateEntry->Next08 = this->SavedHead10; /*0x772d48*/
        }
        RenderStateEntry->Previous0C = 0; /*0x772d4b*/
        ++this->SavedCount0C; /*0x772d4e*/
        this->SavedHead10 = RenderStateEntry; /*0x772d52*/
      }
    }
  }
  else
  {
    v8 = (unsigned int *)NiD3DRenderStateGroup_EntryPool; /*0x772d5c*/
    p_FreeCount08 = &NiD3DRenderStateGroup_EntryPool->FreeCount08; /*0x772d65*/
    v10 = NiD3DRenderStateGroup_EntryPool; /*0x772d69*/
    if ( !*p_FreeCount08 ) /*0x772d62*/
    {
      v11 = v8 + 3; /*0x772d70*/
      sub_772A80(v8, v8[3]); /*0x772d74*/
      *v11 *= 2; /*0x772d7d*/
    }
    FreeObjects00 = v10->FreeObjects00; /*0x772d81*/
    NoSaveHead08 = (OblivionRenderStateEntry *)*v10->FreeObjects00; /*0x772d84*/
    *FreeObjects00 = FreeObjects00[--*p_FreeCount08]; /*0x772d93*/
    NoSaveHead08->Next08 = 0; /*0x772d9d*/
    NoSaveHead08->Previous0C = 0; /*0x772da0*/
    NoSaveHead08->State00 = state; /*0x772da3*/
    NoSaveHead08->Value04 = a3; /*0x772da5*/
    if ( a4 ) /*0x772da9*/
    {
      SavedHead10 = this->SavedHead10; /*0x772dab*/
      if ( SavedHead10 ) /*0x772db0*/
      {
        SavedHead10->Previous0C = NoSaveHead08; /*0x772db2*/
        NoSaveHead08->Next08 = this->SavedHead10; /*0x772db8*/
      }
      NoSaveHead08->Previous0C = 0; /*0x772dbb*/
      ++this->SavedCount0C; /*0x772dbe*/
      this->SavedHead10 = NoSaveHead08; /*0x772dc3*/
    }
    else
    {
      v14 = this->NoSaveHead08; /*0x772dcc*/
      if ( v14 ) /*0x772dd1*/
      {
        v14->Previous0C = NoSaveHead08; /*0x772dd3*/
        NoSaveHead08->Next08 = this->NoSaveHead08; /*0x772dd9*/
      }
      NoSaveHead08->Previous0C = 0; /*0x772ddc*/
      ++this->NoSaveCount04; /*0x772ddf*/
      this->NoSaveHead08 = NoSaveHead08; /*0x772de3*/
    }
  }
  return (char)NoSaveHead08; /*0x772d2f*/
}
