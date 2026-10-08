void __usercall SigilStoneMenu_CreateItem_(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>)
{
  const char *value; // eax
  TESForm *Dynamic; // edi
  double v11; // st7
  TESForm::FormType type; // al
  char *v13; // ebx
  const char *RenderTargetsNum; // eax
  EnchantmentItem *v15; // eax
  TESForm *v16; // ebx
  int v17; // eax
  EnchantmentItem *v18; // ecx
  int v19; // ebp
  int v20; // eax
  _DWORD *v21; // eax
  BSStringT *v22; // eax
  const char *v23; // eax
  int v24; // eax
  BaseExtraList *v25; // edx
  int v26; // edx
  unsigned int v27; // edi
  BSStringT v28[3]; // [esp+28h] [ebp-38h] BYREF
  int v29; // [esp+44h] [ebp-1Ch]
  EnchantmentItem *v30; // [esp+48h] [ebp-18h]
  BSStringT *v31; // [esp+4Ch] [ebp-14h]
  BSStringT *v32; // [esp+50h] [ebp-10h]
  int v33; // [esp+5Ch] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 0x2C) ) /*0x5d4f0b*/
  {
    value = MEMORY[0xB389B0].value; /*0x5d4f10*/
    v31 = v28; /*0x5d4f18*/
LABEL_39:
    v28[0].m_data = 0; /*0x5d51c7*/
    v28[0].m_dataLen = 0; /*0x5d51cc*/
    v28[0].m_bufLen = 0; /*0x5d51d1*/
    BSStringT_Set(v28, value, 0); /*0x5d51d5*/
    ShowMessageBox__((char *)a1, a2, a3, a4, v28[0].m_data, *(int *)&v28[0].m_dataLen); /*0x5d51dc*/
    return; /*0x5d51dc*/
  }
  if ( !NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x74)) /*0x5d4f39*/
    || !*(_BYTE *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x74)) )
  {
    value = MEMORY[0xB389D0].value; /*0x5d51bb*/
    v32 = v28; /*0x5d51c3*/
    goto LABEL_39; /*0x5d51c3*/
  }
  Dynamic = (TESForm *)TESForm_CreateDynamic(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x2C) + 8) + 4)); /*0x5d4f55*/
  v11 = ((double (__thiscall *)(TESForm *, _DWORD))Dynamic->vtbl->CopyFrom)( /*0x5d4f68*/
          Dynamic,
          *(_DWORD *)(*(_DWORD *)(a1 + 0x2C) + 8));
  TESDataHandler_AddForm(g_TESDataHandler, a2, a3, v11, Dynamic); /*0x5d4f71*/
  type = Dynamic->member.type; /*0x5d4f76*/
  if ( type == kFormType_Armor || (HIBYTE(v29) = 0, type == kFormType_Clothing) ) /*0x5d4f84*/
    HIBYTE(v29) = 1; /*0x5d4f86*/
  v13 = (char *)OblivionDynamicCast( /*0x5d4f9d*/
                  Dynamic,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESFullName `RTTI Type Descriptor',
                  0);
  if ( v13 ) /*0x5d4fa4*/
  {
    RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x74)); /*0x5d4fa9*/
    BSStringT_Set((BSStringT *)(v13 + 4), RenderTargetsNum, 0); /*0x5d4fb3*/
  }
  v31 = (BSStringT *)OblivionDynamicCast( /*0x5d4fcf*/
                       Dynamic,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESEnchantableForm `RTTI Type Descriptor',
                       0);
  if ( v31 ) /*0x5d4fd3*/
  {
    v15 = (EnchantmentItem *)FormHeapAlloc(0x44u); /*0x5d4fdb*/
    v30 = v15; /*0x5d4fe3*/
    v33 = 0; /*0x5d4fe9*/
    if ( v15 ) /*0x5d4fed*/
      v16 = (TESForm *)EnchantmentItem::EnchantmentItem(v15); /*0x5d4ff6*/
    else
      v16 = 0; /*0x5d4ffa*/
    v17 = *(_DWORD *)(a1 + 0x28); /*0x5d4ffc*/
    v33 = 0xFFFFFFFF; /*0x5d5001*/
    if ( v17 ) /*0x5d5009*/
    {
      v18 = (EnchantmentItem *)(v17 + 0x7C); /*0x5d500f*/
      v30 = (EnchantmentItem *)(v17 + 0x7C); /*0x5d5014*/
      if ( v17 != 0xFFFFFF84 ) /*0x5d5018*/
      {
        while ( 1 ) /*0x5d5024*/
        {
          v19 = *(_DWORD *)v18; /*0x5d5024*/
          if ( !*(_DWORD *)v18 ) /*0x5d5028*/
            goto LABEL_29; /*0x5d5028*/
          v20 = *(_DWORD *)(v19 + 0x10); /*0x5d502f*/
          if ( HIBYTE(v29) ) /*0x5d5032*/
            break; /*0x5d5032*/
          if ( v20 == 1 || v20 == 2 ) /*0x5d5042*/
            goto LABEL_24; /*0x5d5042*/
LABEL_28:
          v30 = *((EnchantmentItem **)v18 + 1); /*0x5d507f*/
          if ( !v30 ) /*0x5d5088*/
            goto LABEL_29; /*0x5d5088*/
          v18 = v30; /*0x5d5020*/
        }
        if ( v20 ) /*0x5d5036*/
          goto LABEL_28; /*0x5d5036*/
LABEL_24:
        v32 = (BSStringT *)FormHeapAlloc(0x24u); /*0x5d5044*/
        v33 = 1; /*0x5d5054*/
        if ( v32 ) /*0x5d505c*/
          v21 = (_DWORD *)EffectItem_constrCopy(v19); /*0x5d5061*/
        else
          v21 = 0; /*0x5d5068*/
        v33 = 0xFFFFFFFF; /*0x5d506e*/
        EffectItemList_AddItem(&v16[1].member.refID, v21); /*0x5d5076*/
        v18 = v30; /*0x5d507b*/
        goto LABEL_28; /*0x5d507b*/
      }
    }
LABEL_29:
    v22 = v31; /*0x5d508c*/
    *(_DWORD *)&v16[2].member.type = (HIBYTE(v29) != 0) + 2; /*0x5d509c*/
    LOWORD(v22[1].m_data) = *(_WORD *)(a1 + 0x7C); /*0x5d50a3*/
    if ( !v16[1].member.modlist.next && !v16[1].member.modlist.data ) /*0x5d50ac*/
    {
      v23 = MEMORY[0xB389B0].value; /*0x5d50b1*/
      v32 = v28; /*0x5d50bb*/
      v28[0].m_data = 0; /*0x5d50c1*/
      v28[0].m_dataLen = 0; /*0x5d50c3*/
      v28[0].m_bufLen = 0; /*0x5d50c7*/
      BSStringT_Set(v28, v23, 0); /*0x5d50cb*/
      ShowMessageBox__((char *)a1, a2, a3, v11, v28[0].m_data, *(int *)&v28[0].m_dataLen); /*0x5d50d2*/
      Dynamic->vtbl->Destroy(Dynamic, 1); /*0x5d50e0*/
      v16->vtbl->Destroy(v16, 1); /*0x5d50eb*/
      return; /*0x5d5100*/
    }
    *(_DWORD *)&v22->m_dataLen = v16; /*0x5d5101*/
    TESDataHandler_AddForm(g_TESDataHandler, a2, a3, v11, v16); /*0x5d510b*/
  }
  SaveLoad_AddCreatedObj((char *)g_TESSaveLoadGame, (int)Dynamic); /*0x5d5117*/
  v24 = *(_DWORD *)(a1 + 0x2C); /*0x5d511c*/
  v25 = 0; /*0x5d5121*/
  if ( *(_DWORD *)v24 ) /*0x5d511f*/
    v25 = **(BaseExtraList ***)v24; /*0x5d5127*/
  reference->vtbl->super.super.super.RemoveItem( /*0x5d5146*/
    (TESObjectREFR *)reference,
    *(TESForm **)(v24 + 8),
    v25,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0);
  TESObjectREFR_AddItem_Abbrev((TESObjectREFR *)reference, Dynamic, 0, 1); /*0x5d5152*/
  reference->vtbl->super.super.super.RemoveItem( /*0x5d5174*/
    (TESObjectREFR *)reference,
    *(TESForm **)(a1 + 0x28),
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0);
  PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x5d5176*/
  v27 = *(_DWORD *)(a1 + 0x2C); /*0x5d517b*/
  if ( v27 ) /*0x5d5180*/
  {
    ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(a1 + 0x2C), v26); /*0x5d5184*/
    FormHeapFree(v27); /*0x5d518a*/
  }
  *(_DWORD *)&v28[0].m_dataLen = 0x22; /*0x5d5192*/
  *(_DWORD *)(a1 + 0x2C) = 0; /*0x5d5194*/
  *(_DWORD *)(a1 + 0x28) = 0; /*0x5d5197*/
  sub_57DE50(*(int *)&v28[0].m_dataLen); /*0x5d519a*/
  sub_5D41E0(0, a2, a3, v11, a5, a6, a7, a8); /*0x5d51a2*/
}
