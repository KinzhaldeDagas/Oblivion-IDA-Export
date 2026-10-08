char __cdecl Magic_BoundItemSlotOverlap(int a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  TESForm *v4; // eax
  TESForm *v5; // esi
  int v6; // eax
  TESForm *v7; // eax
  TESForm *v8; // edi
  _WORD *v9; // esi
  void *v10; // eax

  if ( !a1 || !a2 ) /*0x41cad4*/
    return Magic_BoundItemSlotOverlap_::Return_0(); /*0x41cac8*/
  v2 = *(_DWORD *)(a1 + 0x1C); /*0x41cada*/
  v3 = *(_DWORD *)(v2 + 0x58); /*0x41cadd*/
  if ( (v3 & 0x20000) != 0 && (*(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 0x58) & 0x20000) != 0 )
  {
    v4 = (v3 & 0x70000) != 0 ? *(TESForm **)(v2 + 0x60) : 0;
    v5 = TESDataHandler_LookupFormByID(v4); /*0x41cb1b*/
    v6 = *(_DWORD *)(a2 + 0x1C); /*0x41cb1d*/
    v7 = (*(_DWORD *)(v6 + 0x58) & 0x70000) != 0 ? *(TESForm **)(v6 + 0x60) : 0;
    v8 = TESDataHandler_LookupFormByID(v7); /*0x41cb4c*/
    v9 = OblivionDynamicCast( /*0x41cb62*/
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESBipedModelForm `RTTI Type Descriptor',
           0);
    v10 = OblivionDynamicCast( /*0x41cb64*/
            v8,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESBipedModelForm `RTTI Type Descriptor',
            0);
    if ( v9 ) /*0x41cb6f*/
    {
      if ( v10 ) /*0x41cb73*/
        return TESBipedModelForm_SlotOverlap(v9, (int)v10); /*0x41cb78*/
    }
  }
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 0x1C) + 0x5A) & 1) != 0 && (*(_BYTE *)(*(_DWORD *)(a2 + 0x1C) + 0x5A) & 1) != 0 ) /*0x41cb91*/
    return 1; /*0x41cb95*/
  return Magic_BoundItemSlotOverlap_::Return_0_(); /*0x41cb7e*/
}
