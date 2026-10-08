void __usercall sub_5AB980(
        char a1@<bpl>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        Tile *a10)
{
  Tile *altActiveTile; // ecx
  double Float; // st7
  TESForm *v12; // eax
  EntryData *InventoryEntryOfItem; // esi
  _BYTE *data; // eax
  _DWORD *OpenMenuTile; // eax
  InterfaceManager *Singleton; // eax
  InterfaceManager *v17; // eax
  double v18; // st7
  InterfaceManager *v19; // eax
  InterfaceManager *v20; // eax
  float duration; // [esp+4h] [ebp-14h]
  float durationa; // [esp+4h] [ebp-14h]
  float durationb; // [esp+4h] [ebp-14h]
  float durationc; // [esp+4h] [ebp-14h]
  float durationd; // [esp+4h] [ebp-14h]
  int v26[3]; // [esp+Ch] [ebp-Ch] BYREF

  altActiveTile = InterfaceManager_GetSingleton(0, 1)->altActiveTile; /*0x5ab98d*/
  if ( altActiveTile || (altActiveTile = a10) != 0 ) /*0x5ab9a0*/
  {
    Float = Tile_GetFloat(altActiveTile, 0xFB9); /*0x5ab9ab*/
    v12 = (TESForm *)Double_To_SInt32(Float); /*0x5ab9b0*/
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v12, 0); /*0x5ab9c3*/
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))InventoryEntryOfItem->type->vtbl->Unk_1E)(InventoryEntryOfItem->type) ) /*0x5ab9cd*/
    {
      __asm { fld     dword ptr ds:0A30634h } /*0x5ab9d3*/
      __asm { fstp    [esp+14h+duration]; duration }
      GameUI_QueueMessage(stru_B38568.value, 0, 1u, duration); /*0x5ab9e7*/
      return; /*0x5ab9f3*/
    }
    if ( Actor_GetCurrentAction(reference) != 0xFFFFFFFF && ContainerEntryExtraData_HasWorn(InventoryEntryOfItem, 0) ) /*0x5aba08*/
    {
      __asm { fld     dword ptr ds:0A30634h } /*0x5aba11*/
      __asm { fstp    [esp+14h+duration]; duration }
      GameUI_QueueMessage(stru_B38A08.value, 0, 1u, durationa); /*0x5aba26*/
      return; /*0x5aba32*/
    }
    if ( InventoryEntryOfItem->extendData ) /*0x5aba33*/
    {
      data = InventoryEntryOfItem->extendData->node.data; /*0x5aba39*/
      if ( data ) /*0x5aba3d*/
      {
        if ( sub_41DF40(data) && ExtraDataList_HasWorn(InventoryEntryOfItem->extendData->node.data, 0) ) /*0x5aba50*/
        {
          __asm { fld     dword ptr ds:0A30634h } /*0x5aba59*/
          __asm { fstp    [esp+14h+duration]; duration }
          GameUI_QueueMessage(stru_B38560.value, 0, 1u, durationb); /*0x5aba6d*/
          return; /*0x5aba79*/
        }
      }
    }
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x5aba7f*/
    if ( OpenMenuTile ) /*0x5aba89*/
    {
      *(_DWORD *)(Tile_GetParentMenu(OpenMenuTile) + 0x50) = InventoryEntryOfItem; /*0x5aba96*/
      if ( sub_65AAD0((MobileObject *)reference) ) /*0x5aba9f*/
      {
        __asm { fld     dword ptr ds:0A30634h } /*0x5abaa8*/
        __asm { fstp    [esp+14h+duration] }
        GameUI_QueueMessage(stru_B38A18.value, 0, 1u, durationc); /*0x5ababd*/
      }
      else
      {
        if ( sub_66E0D0((TESObjectREFR *)reference, (int)v26, InventoryEntryOfItem->type, (float *)v26, 0, 0) ) /*0x5abad5*/
        {
          BYTE2(dword_B3B0B4[0xC9]) = 1; /*0x5abae4*/
          CountDelta = TESHealthForm_GetHealth((TESHealthForm *)InventoryEntryOfItem); /*0x5abaf8*/
          Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5abafd*/
          sub_57CFE0((int)Singleton, a7, a8, Float, a2, a3, a4, a5, 1, 0); /*0x5abb07*/
          v17 = InterfaceManager_GetSingleton(0, 1); /*0x5abb10*/
          v18 = sub_583E60(v17, a1, a7, a8, a6, Float); /*0x5abb1a*/
          v19 = InterfaceManager_GetSingleton(0, 1); /*0x5abb23*/
          InterfaceManager_ProcessGlobalHotkeys(v19, v18, a6, a7, a8, a5, a2, a3, a4); /*0x5abb2d*/
          v20 = InterfaceManager_GetSingleton(0, 1); /*0x5abb36*/
          InterfaceManager::UpdateMenuFades(v20, a1, a7, a8, v18); /*0x5abb40*/
          sub_57CC00(a1, a7, a8, v18, a2, a3, a4, a5); /*0x5abb45*/
          sub_5AB800(a7, a8, v18, v26[0], v26[1], v26[2], 1); /*0x5abb65*/
          InterfaceManager_GetSingleton(0, 1)->unk090 = 1; /*0x5abb76*/
          return; /*0x5abb84*/
        }
        __asm { fld     dword ptr ds:0A30634h } /*0x5abb85*/
        __asm { fstp    [esp+14h+duration]; duration }
        GameUI_QueueMessage(stru_B38A10.value, 0, 1u, durationd); /*0x5abb9a*/
      }
      CountDelta = 0xFFFFFFFF; /*0x5abb9f*/
    }
  }
}
