bool __cdecl Magic_BoundItemSlotOverlap(int a1, int a2)
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

  if ( !a1 || !a2 )
    return Magic_BoundItemSlotOverlap_::Return_0();
  v2 = *(_DWORD *)(a1 + 0x1C);
  v3 = *(_DWORD *)(v2 + 0x58);
  if ( (v3 & 0x20000) != 0 && (*(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 0x58) & 0x20000) != 0 )
  {
    v4 = (v3 & 0x70000) != 0 ? *(TESForm **)(v2 + 0x60) : 0;
    v5 = TESDataHandler_LookupFormByID(v4);
    v6 = *(_DWORD *)(a2 + 0x1C);
    v7 = (*(_DWORD *)(v6 + 0x58) & 0x70000) != 0 ? *(TESForm **)(v6 + 0x60) : 0;
    v8 = TESDataHandler_LookupFormByID(v7);
    v9 = OblivionDynamicCast(
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESBipedModelForm `RTTI Type Descriptor',
           0);
    v10 = OblivionDynamicCast(
            v8,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESBipedModelForm `RTTI Type Descriptor',
            0);
    if ( v9 )
    {
      if ( v10 )
        return TESBipedModelForm_SlotOverlap(v9, (int)v10);
    }
  }
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 0x1C) + 0x5A) & 1) != 0 && (*(_BYTE *)(*(_DWORD *)(a2 + 0x1C) + 0x5A) & 1) != 0 )
    return 1;
  return Magic_BoundItemSlotOverlap_::Return_0_();
}
