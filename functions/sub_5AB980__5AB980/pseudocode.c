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
  InterfaceManager *v18; // eax
  InterfaceManager *v19; // eax
  float duration; // [esp+4h] [ebp-14h]
  float durationa; // [esp+4h] [ebp-14h]
  float durationb; // [esp+4h] [ebp-14h]
  float durationc; // [esp+4h] [ebp-14h]
  float durationd; // [esp+4h] [ebp-14h]
  float v25[3]; // [esp+Ch] [ebp-Ch] BYREF

  altActiveTile = InterfaceManager_GetSingleton(0, 1)->altActiveTile;
  if ( altActiveTile || (altActiveTile = a10) != 0 )
  {
    Float = Tile_GetFloat(altActiveTile, 0xFB9);
    v12 = (TESForm *)Double_To_SInt32(Float);
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v12, 0);
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))InventoryEntryOfItem->type->vtbl->Unk_1E)(InventoryEntryOfItem->type) )
    {
      __asm { fld     dword ptr ds:0A30634h }
      __asm { fstp    [esp+14h+duration]; duration }
      GameUI_QueueMessage((const char *)dword_B38568, 0, 1u, duration);
      return;
    }
    if ( Actor_GetCurrentAction(TESDataHandler_g_PlayerRef) != 0xFFFFFFFF
      && (unsigned __int8)ContainerEntryExtraData_HasWorn(InventoryEntryOfItem, 0) )
    {
      __asm { fld     dword ptr ds:0A30634h }
      __asm { fstp    [esp+14h+duration]; duration }
      GameUI_QueueMessage((const char *)dword_B38A08, 0, 1u, durationa);
      return;
    }
    if ( InventoryEntryOfItem->extendData )
    {
      data = InventoryEntryOfItem->extendData->node.data;
      if ( data )
      {
        if ( sub_41DF40(data) && ExtraDataList_HasWorn(InventoryEntryOfItem->extendData->node.data, 0) )
        {
          __asm { fld     dword ptr ds:0A30634h }
          __asm { fstp    [esp+14h+duration]; duration }
          GameUI_QueueMessage((const char *)dword_B38560, 0, 1u, durationb);
          return;
        }
      }
    }
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EA);
    if ( OpenMenuTile )
    {
      *(_DWORD *)(Tile_GetParentMenu(OpenMenuTile) + 0x50) = InventoryEntryOfItem;
      if ( sub_65AAD0(TESDataHandler_g_PlayerRef) )
      {
        __asm { fld     dword ptr ds:0A30634h }
        __asm { fstp    [esp+14h+duration] }
        GameUI_QueueMessage((const char *)dword_B38A18, 0, 1u, durationc);
      }
      else
      {
        if ( sub_66E0D0((TESObjectREFR *)TESDataHandler_g_PlayerRef, (int)v25, InventoryEntryOfItem->type, v25, 0, 0) )
        {
          byte_B3B3DA = 1;
          CountDelta = (int)TESHealthForm_GetHealth((Sky *)InventoryEntryOfItem);
          Singleton = InterfaceManager_GetSingleton(0, 1);
          sub_57CFE0((int)Singleton, a7, a8, Float, 1, 0);
          v17 = InterfaceManager_GetSingleton(0, 1);
          sub_583E60(v17, a1, a7, a8, a6);
          v18 = InterfaceManager_GetSingleton(0, 1);
          sub_5821F0(v18, Float, a6, a7, a8, a5, a2, a3);
          v19 = InterfaceManager_GetSingleton(0, 1);
          sub_583F40(v19, a1, a7, a8, Float);
          sub_57CC00(a1, a7, a8, Float);
          sub_5AB800(a7, a8, Float, SLOBYTE(v25[0]), SLODWORD(v25[1]), SLODWORD(v25[2]), 1);
          InterfaceManager_GetSingleton(0, 1)->unk090 = 1;
          return;
        }
        __asm { fld     dword ptr ds:0A30634h }
        __asm { fstp    [esp+14h+duration]; duration }
        GameUI_QueueMessage((const char *)dword_B38A10, 0, 1u, durationd);
      }
      CountDelta = 0xFFFFFFFF;
    }
  }
}
