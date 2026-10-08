// positive sp value has been detected, the output may be wrong!
void __usercall AlchemyMenu_CreatePotion__::OBSE_CreatePotion_HkAddr_(
        TESHealthForm **a1@<ecx>,
        int a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  NiNode *matched; // eax
  bool v6; // zf
  void (__cdecl *v7)(const char *); // edx
  AlchemyItem *v8; // eax
  AlchemyItem *v9; // eax
  unsigned int **v10; // esi
  int v11; // ebp
  int v12; // edx
  unsigned int v13; // ebx
  unsigned int *v14; // ecx
  unsigned int Health; // eax
  float v16; // [esp+0h] [ebp-2Ch]
  int v17; // [esp+28h] [ebp-4h]
  float v18; // [esp+40h] [ebp+14h]

  matched = Alchemy_MatchPotion(a1, v17); /*0x594cfa*/
  if ( matched ) /*0x594d01*/
  {
    TESObjectREFR_AddItem_Abbrev((TESObjectREFR *)reference, (TESForm *)matched, 0, 1); /*0x594d0e*/
  }
  else
  {
    TESDataHandler_AddForm(g_TESDataHandler, a3, a4, a5, *(TESForm **)(a2 + 0x94)); /*0x594d25*/
    SaveLoad_AddCreatedObj((char *)g_TESSaveLoadGame, *(_DWORD *)(a2 + 0x94)); /*0x594d37*/
    v18 = *(float *)(a2 + 0x98); /*0x594d48*/
    a5 = v18; /*0x594d4c*/
    *(float *)(*(_DWORD *)(a2 + 0x94) + 0x74) = v18; /*0x594d53*/
    v6 = EffectItemList_AllEffectsHostile((_DWORD *)(*(_DWORD *)(a2 + 0x94) + 0x30)) == 0; /*0x594d64*/
    v7 = *(void (__cdecl **)(const char *))(*(_DWORD *)(*(_DWORD *)(a2 + 0x94) + 0x40) + 0x18); /*0x594d71*/
    if ( v6 ) /*0x594d74*/
    {
      v7("Clutter\\Potions\\Potion01.NIF"); /*0x594d8b*/
      BSStringT_Set((BSStringT *)(*(_DWORD *)(a2 + 0x94) + 0x5C), "Clutter\\Potions\\IconPotion01.dds", 0); /*0x594da0*/
    }
    else
    {
      v7("Clutter\\Potions\\PotionPoison.NIF"); /*0x594d7b*/
      BSStringT_Set((BSStringT *)(*(_DWORD *)(a2 + 0x94) + 0x5C), "Clutter\\Potions\\IconPotionPoison01.dds", 0); /*0x594d84*/
    }
    TESObjectREFR_AddItem_Abbrev((TESObjectREFR *)reference, *(TESForm **)(a2 + 0x94), 0, 1); /*0x594db6*/
    v8 = (AlchemyItem *)FormHeapAlloc(0x80u); /*0x594dc0*/
    if ( v8 ) /*0x594dd6*/
      v9 = AlchemyItem::AlchemyItem(v8); /*0x594dda*/
    else
      v9 = 0; /*0x594de1*/
    *(_DWORD *)(a2 + 0x94) = v9; /*0x594deb*/
  }
  GameUI_QueueMessage(MEMORY[0xB388E8].value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x594e06*/
  sub_57DE50(0x12); /*0x594e0d*/
  *(_BYTE *)(a2 + 0xA4) = 3; /*0x594e15*/
  v10 = (unsigned int **)(a2 + 0xB0); /*0x594e1c*/
  v11 = 4; /*0x594e22*/
  do /*0x594ed7*/
  {
    if ( *v10 ) /*0x594e27*/
    {
      reference->vtbl->super.super.super.RemoveItem( /*0x594e55*/
        (TESObjectREFR *)reference,
        (TESForm *)(*v10)[2],
        0,
        1,
        0,
        0,
        0,
        0,
        0,
        1,
        1);
      if ( TESHealthForm_GetHealth((TESHealthForm *)*v10) == 1 ) /*0x594e61*/
      {
        v13 = (unsigned int)*v10; /*0x594e63*/
        if ( *v10 ) /*0x594e63*/
        {
          ContainerEntryExtraData_DestroyDataTable(*v10, v12); /*0x594e6b*/
          FormHeapFree(v13); /*0x594e71*/
        }
        v14 = v10[0xFFFFFFE4]; /*0x594e79*/
        *v10 = 0; /*0x594e7c*/
        Tile_SetString(v14, (_DWORD *)0xFAE, (char *)stru_B388F8.value); /*0x594e8d*/
        Tile_SetFloat((Tile *)v10[0xFFFFFFEE], 0xFA1u, 1.0); /*0x594e9d*/
      }
      else
      {
        Health = TESHealthForm_GetHealth((TESHealthForm *)*v10); /*0x594ea1*/
        Shared_SetDwordAtOffset04(*v10, Health - 1); /*0x594eac*/
        v16 = (float)(int)TESHealthForm_GetHealth((TESHealthForm *)*v10); /*0x594ec1*/
        Tile_SetFloat((Tile *)v10[0xFFFFFFEE], 0xFAEu, v16); /*0x594ecc*/
      }
    }
    ++v10; /*0x594ed1*/
    --v11; /*0x594ed4*/
  }
  while ( v11 ); /*0x594ed7*/
  AlchemyMenu_CalcPotion_((_DWORD *)a2, a3, a4, a5); /*0x594edf*/
}
