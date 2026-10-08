double __usercall sub_5A2F27@<st0>(
        TESObjectREFR *ebx0@<ebx>,
        TESForm *edi0@<edi>,
        _DWORD *esi0@<esi>,
        double a1@<st2>,
        double st6_0@<st1>,
        double a6@<st0>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>)
{
  int v10; // eax
  BaseExtraList *v11; // ebp
  int v12; // ecx
  TESForm *v13; // ecx
  float *ContainerChanges; // eax

  v10 = esi0[0xC]; /*0x5a2f27*/
  v11 = 0; /*0x5a2f2c*/
  if ( *(TESObjectREFR **)v10 != ebx0 ) /*0x5a2f30*/
    v11 = **(BaseExtraList ***)v10; /*0x5a2f32*/
  ((void (__usercall *)(PlayerCharacter *@<ecx>, _DWORD, BaseExtraList *, int, double@<st0>, double@<st1>, double@<st2>))reference->vtbl->super.super.super.RemoveItem)( /*0x5a2f51*/
    reference,
    *(_DWORD *)(v10 + 8),
    v11,
    1,
    a6,
    st6_0,
    a1);
  PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x5a2f53*/
  TESObjectREFR_AddItem_Abbrev((TESObjectREFR *)reference, edi0, (ExtraDataList *)ebx0, 1); /*0x5a2f62*/
  v12 = esi0[0xB]; /*0x5a2f67*/
  if ( *(TESObjectREFR **)v12 != ebx0 ) /*0x5a2f6e*/
    v11 = **(BaseExtraList ***)v12; /*0x5a2f70*/
  v13 = *(TESForm **)(v12 + 8); /*0x5a2f72*/
  if ( v13 == (TESForm *)MEMORY[0xB35EE4] ) /*0x5a2f7b*/
  {
    sub_41F650(v11); /*0x5a2fa3*/
  }
  else
  {
    reference->vtbl->super.super.super.RemoveItem( /*0x5a2f98*/
      (TESObjectREFR *)reference,
      v13,
      v11,
      1,
      (UInt32)ebx0,
      (UInt32)ebx0,
      ebx0,
      (float *)ebx0,
      (float *)ebx0,
      1,
      (UInt8)ebx0);
    PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x5a2f9a*/
  }
  ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5a2fb1*/
  sub_491700(ContainerChanges, a1, st6_0, a6, (TESObjectREFR *)reference, esi0[0xE], (TESForm *)ebx0); /*0x5a2fc4*/
  GameUI_QueueMessage(MEMORY[0xB389E0].value, (UInt32)ebx0, 1u, flt_A31E2C); /*0x5a2fdc*/
  sub_57DE50(0xB); /*0x5a2fe3*/
  return sub_5A1740(a1, a2, a3, a4, a5);
}
