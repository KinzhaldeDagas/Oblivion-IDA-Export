void __usercall sub_5A2F27(
        TESObjectREFR *ebx0@<ebx>,
        int edi0@<edi>,
        _DWORD *a3@<esi>,
        double a1@<st2>,
        double a2@<st1>,
        double a6@<st0>)
{
  int v6; // eax
  BaseExtraList *v7; // ebp
  int v8; // ecx
  TESForm *v9; // ecx
  float *ContainerChanges; // eax

  v6 = a3[0xC];
  v7 = 0;
  if ( *(TESObjectREFR **)v6 != ebx0 )
    v7 = **(BaseExtraList ***)v6;
  ((void (__usercall *)(PlayerCharacter *@<ecx>, _DWORD, BaseExtraList *, int, double@<st0>, double@<st1>))TESDataHandler_g_PlayerRef->vtbl->super.super.super.RemoveItem)(
    TESDataHandler_g_PlayerRef,
    *(_DWORD *)(v6 + 8),
    v7,
    1,
    a6,
    a2);
  sub_5C1900();
  TESObjectREFR_AddItem_Abbrev((TESObjectREFR *)TESDataHandler_g_PlayerRef, edi0, (int)ebx0, 1);
  v8 = a3[0xB];
  if ( *(TESObjectREFR **)v8 != ebx0 )
    v7 = **(BaseExtraList ***)v8;
  v9 = *(TESForm **)(v8 + 8);
  if ( v9 == (TESForm *)TESDataHandler_g_AzuraStone )
  {
    sub_41F650(v7);
  }
  else
  {
    TESDataHandler_g_PlayerRef->vtbl->super.super.super.RemoveItem(
      (TESObjectREFR *)TESDataHandler_g_PlayerRef,
      v9,
      v7,
      1,
      (UInt32)ebx0,
      (UInt32)ebx0,
      ebx0,
      (float *)ebx0,
      (float *)ebx0,
      1,
      (UInt8)ebx0);
    sub_5C1900();
  }
  ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
  sub_491700(ContainerChanges, a1, a2, a6, (TESObjectREFR *)TESDataHandler_g_PlayerRef, a3[0xE], (TESForm *)ebx0);
  GameUI_QueueMessage((const char *)sEnchantmentSuccess, (UInt32)ebx0, 1u, flt_A31E2C);
  sub_57DE50(0xB);
  sub_5A1740(a1, a2);
}
