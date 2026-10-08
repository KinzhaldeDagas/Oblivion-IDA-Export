// Verified — for pointsByReference[reference], sets every listed node's linkedPointsDisabled flag to !enabled. When disabling and at least one point was found, calls parentCell->MarkAsModified(0x01000000). The exact semantic meaning of this modification mask is Unknown from this call site.
void __thiscall TESPathGrid_SetLinkedPointsEnabled(TESPathGrid *this, TESObjectREFR *reference, bool enabled)
{
  int v4; // esi
  char i; // al
  int v6; // [esp+4h] [ebp-4h] BYREF

  v6 = 0; /*0x4e5181*/
  if ( NiTMap_GetAt(&this->pointsByReference.vtable, (int)reference, &v6) ) /*0x4e5189*/
  {
    v4 = v6; /*0x4e5198*/
    for ( i = 0; v4; i = 1 ) /*0x4e51a0*/
    {
      if ( !*(_DWORD *)(v4 + 4) && !*(_DWORD *)v4 ) /*0x4e51a8*/
        break; /*0x4e51ab*/
      PathGraphNode_SetLinkedPointsDisabled(*(void **)v4, !enabled); /*0x4e51b5*/
      v4 = *(_DWORD *)(v4 + 4); /*0x4e51ba*/
    }
    if ( !enabled ) /*0x4e51c7*/
    {
      if ( i ) /*0x4e51cb*/
        this->parentCell->vtbl->MarkAsModified((TESForm *)this->parentCell, 0x1000000); /*0x4e51da*/
    }
  }
}
