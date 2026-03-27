void __usercall SigilStoneMenu_CreateItem_(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  const char *v5; // eax
  unsigned __int8 *Dynamic; // edi
  double v7; // st7
  unsigned __int8 v8; // al
  char *v9; // ebx
  const char *RenderTargetsNum; // eax
  EnchantmentItem *v11; // eax
  unsigned __int8 *v12; // ebx
  int v13; // eax
  EnchantmentItem *v14; // ecx
  int v15; // ebp
  int v16; // eax
  _DWORD *v17; // eax
  BSStringT *v18; // eax
  const char *v19; // eax
  int v20; // eax
  BaseExtraList *v21; // edx
  int v22; // edx
  unsigned int v23; // edi
  BSStringT v24[3]; // [esp+28h] [ebp-38h] BYREF
  int v25; // [esp+44h] [ebp-1Ch]
  EnchantmentItem *v26; // [esp+48h] [ebp-18h]
  BSStringT *v27; // [esp+4Ch] [ebp-14h]
  BSStringT *v28; // [esp+50h] [ebp-10h]
  int v29; // [esp+5Ch] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 0x2C) )
  {
    v5 = (const char *)sNoItem;
    v27 = v24;
LABEL_39:
    v24[0].m_data = 0;
    v24[0].m_dataLen = 0;
    v24[0].m_bufLen = 0;
    BSStringT_Set(v24, v5, 0);
    ShowMessageBox__((char *)a1, 0, a2, a3, a4, v24[0].m_data, *(int *)&v24[0].m_dataLen);
    return;
  }
  if ( !NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x74))
    || !*(_BYTE *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x74)) )
  {
    v5 = (const char *)sNoName;
    v28 = v24;
    goto LABEL_39;
  }
  Dynamic = (unsigned __int8 *)TESForm_CreateDynamic(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x2C) + 8) + 4));
  v7 = ((double (__thiscall *)(unsigned __int8 *, _DWORD))*(_DWORD *)(*(_DWORD *)Dynamic + 0xB4))(
         Dynamic,
         *(_DWORD *)(*(_DWORD *)(a1 + 0x2C) + 8));
  TESDataHandler_AddForm((TESWorldSpace **)TESDataHandler, a2, a3, v7, Dynamic);
  v8 = Dynamic[4];
  if ( v8 == 0x14 || (HIBYTE(v25) = 0, v8 == 0x16) )
    HIBYTE(v25) = 1;
  v9 = (char *)OblivionDynamicCast(
                 Dynamic,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESFullName `RTTI Type Descriptor',
                 0);
  if ( v9 )
  {
    RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x74));
    BSStringT_Set((BSStringT *)(v9 + 4), RenderTargetsNum, 0);
  }
  v27 = (BSStringT *)OblivionDynamicCast(
                       Dynamic,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESEnchantableForm `RTTI Type Descriptor',
                       0);
  if ( v27 )
  {
    v11 = (EnchantmentItem *)FormHeapAlloc(0x44u);
    v26 = v11;
    v29 = 0;
    if ( v11 )
      v12 = (unsigned __int8 *)EnchantmentItem::EnchantmentItem(v11);
    else
      v12 = 0;
    v13 = *(_DWORD *)(a1 + 0x28);
    v29 = 0xFFFFFFFF;
    if ( v13 )
    {
      v14 = (EnchantmentItem *)(v13 + 0x7C);
      v26 = (EnchantmentItem *)(v13 + 0x7C);
      if ( v13 != 0xFFFFFF84 )
      {
        while ( 1 )
        {
          v15 = *(_DWORD *)v14;
          if ( !*(_DWORD *)v14 )
            goto LABEL_29;
          v16 = *(_DWORD *)(v15 + 0x10);
          if ( HIBYTE(v25) )
            break;
          if ( v16 == 1 || v16 == 2 )
            goto LABEL_24;
LABEL_28:
          v26 = *((EnchantmentItem **)v14 + 1);
          if ( !v26 )
            goto LABEL_29;
          v14 = v26;
        }
        if ( v16 )
          goto LABEL_28;
LABEL_24:
        v28 = (BSStringT *)FormHeapAlloc(0x24u);
        v29 = 1;
        if ( v28 )
          v17 = (_DWORD *)EffectItem_constrCopy(v15);
        else
          v17 = 0;
        v29 = 0xFFFFFFFF;
        EffectItemList_AddItem((_DWORD *)v12 + 9, v17);
        v14 = v26;
        goto LABEL_28;
      }
    }
LABEL_29:
    v18 = v27;
    *((_DWORD *)v12 + 0xD) = (HIBYTE(v25) != 0) + 2;
    LOWORD(v18[1].m_data) = *(_WORD *)(a1 + 0x7C);
    if ( !*((_DWORD *)v12 + 0xB) && !*((_DWORD *)v12 + 0xA) )
    {
      v19 = (const char *)sNoItem;
      v28 = v24;
      v24[0].m_data = 0;
      v24[0].m_dataLen = 0;
      v24[0].m_bufLen = 0;
      BSStringT_Set(v24, v19, 0);
      ShowMessageBox__((char *)a1, 0, a2, a3, v7, v24[0].m_data, *(int *)&v24[0].m_dataLen);
      (*(void (__thiscall **)(unsigned __int8 *, int))(*(_DWORD *)Dynamic + 0x10))(Dynamic, 1);
      (*(void (__thiscall **)(unsigned __int8 *, int))(*(_DWORD *)v12 + 0x10))(v12, 1);
      return;
    }
    *(_DWORD *)&v18->m_dataLen = v12;
    TESDataHandler_AddForm((TESWorldSpace **)TESDataHandler, a2, a3, v7, v12);
  }
  SaveLoad_AddCreatedObj((char *)SaveLoad_CurrentSavegame, (int)Dynamic);
  v20 = *(_DWORD *)(a1 + 0x2C);
  v21 = 0;
  if ( *(_DWORD *)v20 )
    v21 = **(BaseExtraList ***)v20;
  TESDataHandler_g_PlayerRef->vtbl->super.super.super.RemoveItem(
    (TESObjectREFR *)TESDataHandler_g_PlayerRef,
    *(TESForm **)(v20 + 8),
    v21,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0);
  TESObjectREFR_AddItem_Abbrev((TESObjectREFR *)TESDataHandler_g_PlayerRef, (int)Dynamic, 0, 1);
  TESDataHandler_g_PlayerRef->vtbl->super.super.super.RemoveItem(
    (TESObjectREFR *)TESDataHandler_g_PlayerRef,
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
  sub_5C1900();
  v23 = *(_DWORD *)(a1 + 0x2C);
  if ( v23 )
  {
    ContainerEntryExtraData_DestroyDataTable(*(unsigned int **)(a1 + 0x2C), v22);
    FormHeapFree(v23);
  }
  *(_DWORD *)&v24[0].m_dataLen = 0x22;
  *(_DWORD *)(a1 + 0x2C) = 0;
  *(_DWORD *)(a1 + 0x28) = 0;
  sub_57DE50(*(int *)&v24[0].m_dataLen);
  sub_5D41E0(0, a2, a3, v7);
}
