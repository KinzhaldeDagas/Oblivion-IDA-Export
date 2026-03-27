void __userpurge sub_5CF770(_DWORD *a1@<ecx>, double st7_0@<st0>, int arg0, _DWORD *a4)
{
  int v6; // edx
  _DWORD *v7; // edi
  int v8; // ebp
  bool v10; // zf
  double Float; // st4
  double v12; // st7
  TESForm *v13; // eax
  EntryData *InventoryEntryOfItem; // eax
  int v15; // edx
  void **p_extendData; // edi
  unsigned __int16 v17; // bx
  int v18; // eax
  float v19; // [esp+0h] [ebp-24h]
  float a2; // [esp+4h] [ebp-20h]
  int a3; // [esp+18h] [ebp-Ch]
  float v22; // [esp+28h] [ebp+4h]
  float v23; // [esp+28h] [ebp+4h]
  float v24; // [esp+2Ch] [ebp+8h]
  float v25; // [esp+2Ch] [ebp+8h]
  float v26; // [esp+2Ch] [ebp+8h]
  float v27; // [esp+2Ch] [ebp+8h]
  float v28; // [esp+2Ch] [ebp+8h]

  v6 = arg0;
  v7 = a4;
  v8 = 0;
  if ( !a4 )
    v7 = (_DWORD *)sub_5CE790(a1, arg0);
  if ( v6 < 0x33 )
  {
    Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFA1, 1.0);
  }
  else
  {
    if ( !v7 )
      return;
    v10 = a1[0xA] == 0;
    *((_BYTE *)a1 + 0x50) = 0xFF;
    a1[0xF] = 0;
    if ( !v10 )
    {
      sub_57DE50(4);
      Float = Tile_GetFloat(v7, 0xFE0);
      a3 = Double_To_SInt32(st7_0);
      sub_588D90(v7, st7_0);
      v24 = st7_0 - Tile_GetFloat((_DWORD *)a1[0xA], 0xFBD);
      Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFAB, v24);
      v25 = (float)(2 * a3);
      v22 = Tile_GetFloat(v7, 0xFCB) - v25;
      Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFCB, v22);
      v26 = Tile_GetFloat(v7, 0xFCA) - v25;
      Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFCA, v26);
      v27 = (float)a3;
      v23 = sub_588C50(v7) + v27;
      Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFAD, v23);
      v12 = sub_588CF0(v7);
      v28 = Float + v27;
      Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFAC, v28);
      Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFA1, fConstant_2);
      a1[0xF] = v7;
      Tile_GetFloat(v7, 0xFB9);
      v13 = (TESForm *)Double_To_SInt32(v12);
      InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v13, 0);
      p_extendData = (void **)&InventoryEntryOfItem->extendData;
      if ( a1[0x12] )
      {
        v17 = *((_WORD *)OblivionDynamicCast(
                           InventoryEntryOfItem->type,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                           &TESEnchantableForm `RTTI Type Descriptor',
                           0)
              + 4);
        sub_4849C0(p_extendData);
        a2 = v12;
        v19 = (float)v17;
        sub_5483E0(v19, a2);
        v8 = v18;
      }
      if ( p_extendData )
      {
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)p_extendData, v15);
        FormHeapFree((unsigned int)p_extendData);
      }
    }
  }
  if ( a1[0x12] )
    sub_5CEF60((_DWORD **)a1, v8);
}
