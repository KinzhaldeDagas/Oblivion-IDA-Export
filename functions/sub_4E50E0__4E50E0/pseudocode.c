// Verified — PGRL loading populates pointsByReference (+0x34): key is a TESObjectREFR* and value is a BSSimpleList of TESPathGridPoint*. Duplicate point pointers are suppressed. Cross-reference from TESPathGrid_LoadSerializedGraphChunks at 0x4E678A.
void __thiscall TESPathGrid_AddPointForLinkedReference(
        TESPathGrid *this,
        TESObjectREFR *reference,
        TESPathGridPoint *point)
{
  TESObjectREFR *v3; // ebx
  TESPathGridReferencePointMap *p_pointsByReference; // edi
  TESObjectREFR *v5; // esi
  TESObjectREFR *v6; // eax
  TESObjectREFR *v7; // eax
  TESObjectREFR *v8; // [esp-10h] [ebp-14h]

  v3 = reference; /*0x4e50e1*/
  if ( reference && point ) /*0x4e50ee*/
  {
    p_pointsByReference = &this->pointsByReference; /*0x4e50f6*/
    v8 = reference; /*0x4e50fa*/
    reference = 0; /*0x4e50fd*/
    if ( !NiTMap_GetAt(&this->pointsByReference.vtable, (int)v8, &reference) || (v5 = reference) == 0 ) /*0x4e5114*/
    {
      v6 = (TESObjectREFR *)FormHeapAlloc(8u); /*0x4e5118*/
      if ( v6 ) /*0x4e5122*/
      {
        v6->vtbl = 0; /*0x4e5124*/
        *(_DWORD *)&v6->member.super.type = 0; /*0x4e512a*/
      }
      else
      {
        v6 = 0; /*0x4e5133*/
      }
      v5 = v6; /*0x4e5139*/
      NiTMap_SetAt(p_pointsByReference, (int)v3, (int)v6); /*0x4e513b*/
    }
    v7 = v5; /*0x4e5142*/
    if ( v5 ) /*0x4e5144*/
    {
      while ( (TESPathGridPoint *)v7->vtbl != point ) /*0x4e514c*/
      {
        v7 = *(TESObjectREFR **)&v7->member.super.type; /*0x4e514e*/
        if ( !v7 ) /*0x4e5153*/
          goto LABEL_12; /*0x4e5153*/
      }
    }
    else
    {
LABEL_12:
      BSSimpleList_PushFront(v5, (int)point); /*0x4e5155*/
    }
  }
}
