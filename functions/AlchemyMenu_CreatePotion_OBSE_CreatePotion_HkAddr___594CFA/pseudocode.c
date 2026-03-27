// positive sp value has been detected, the output may be wrong!
void __usercall AlchemyMenu_CreatePotion__::OBSE_CreatePotion_HkAddr_(
        Sky **a1@<ecx>,
        int a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  NiNode *matched; // eax
  bool v7; // zf
  void (__cdecl *v8)(const char *); // edx
  AlchemyItem *v9; // eax
  AlchemyItem *v10; // eax
  double v11; // st7
  unsigned int **v12; // esi
  int v13; // ebp
  int v14; // edx
  unsigned int v15; // ebx
  unsigned int *v16; // ecx
  NiNode *Health; // eax
  float v18; // [esp+0h] [ebp-2Ch]
  int v19; // [esp+28h] [ebp-4h]

  matched = Alchemy_MatchPotion(a1, v19);
  if ( matched )
  {
    TESObjectREFR_AddItem_Abbrev((TESObjectREFR *)TESDataHandler_g_PlayerRef, (int)matched, 0, 1);
  }
  else
  {
    TESDataHandler_AddForm((TESWorldSpace **)TESDataHandler, a3, a4, a5, *(unsigned __int8 **)(a2 + 0x94));
    SaveLoad_AddCreatedObj((char *)SaveLoad_CurrentSavegame, *(_DWORD *)(a2 + 0x94));
    *(float *)(*(_DWORD *)(a2 + 0x94) + 0x74) = *(float *)(a2 + 0x98);
    v7 = (unsigned __int8)EffectItemList_AllEffectsHostile((_DWORD *)(*(_DWORD *)(a2 + 0x94) + 0x30)) == 0;
    v8 = *(void (__cdecl **)(const char *))(*(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 0x40) + 0x18);
    if ( v7 )
    {
      v8("Clutter\\Potions\\Potion01.NIF");
      BSStringT_Set((BSStringT *)(*(_DWORD *)(a2 + 0x94) + 0x5C), "Clutter\\Potions\\IconPotion01.dds", 0);
    }
    else
    {
      v8("Clutter\\Potions\\PotionPoison.NIF");
      BSStringT_Set((BSStringT *)(*(_DWORD *)(a2 + 0x94) + 0x5C), "Clutter\\Potions\\IconPotionPoison01.dds", 0);
    }
    TESObjectREFR_AddItem_Abbrev((TESObjectREFR *)TESDataHandler_g_PlayerRef, *(_DWORD *)(a2 + 0x94), 0, 1);
    v9 = (AlchemyItem *)FormHeapAlloc(0x80u);
    if ( v9 )
      v10 = AlchemyItem::AlchemyItem(v9);
    else
      v10 = 0;
    *(_DWORD *)(a2 + 0x94) = v10;
  }
  v11 = flt_A30634;
  GameUI_QueueMessage((const char *)sPotionSucceded, 0, 1u, flt_A30634);
  sub_57DE50(0x12);
  *(_BYTE *)(a2 + 0xA4) = 3;
  v12 = (unsigned int **)(a2 + 0xB0);
  v13 = 4;
  do
  {
    if ( *v12 )
    {
      TESDataHandler_g_PlayerRef->vtbl->super.super.super.RemoveItem(
        (TESObjectREFR *)TESDataHandler_g_PlayerRef,
        (TESForm *)(*v12)[2],
        0,
        1,
        0,
        0,
        0,
        0,
        0,
        1,
        1);
      if ( TESHealthForm_GetHealth((Sky *)*v12) == (NiNode *)1 )
      {
        v15 = (unsigned int)*v12;
        if ( *v12 )
        {
          ContainerEntryExtraData_DestroyDataTable(*v12, v14);
          FormHeapFree(v15);
        }
        v16 = v12[0xFFFFFFE4];
        *v12 = 0;
        Tile_SetString(v16, (_DWORD *)0xFAE, (char *)dword_B388F8);
        v11 = 1.0;
        Tile_SetFloat((Tile *)v12[0xFFFFFFEE], (_DWORD *)0xFA1, 1.0);
      }
      else
      {
        Health = TESHealthForm_GetHealth((Sky *)*v12);
        sub_60D020(*v12, (int)&Health[0xFFFFFFFF].members.m_combinedBounds.Radius + 3);
        v11 = (double)(int)TESHealthForm_GetHealth((Sky *)*v12);
        v18 = v11;
        Tile_SetFloat((Tile *)v12[0xFFFFFFEE], (_DWORD *)0xFAE, v18);
      }
    }
    ++v12;
    --v13;
  }
  while ( v13 );
  AlchemyMenu_CalcPotion_((_DWORD *)a2, a3, a4, v11);
}
