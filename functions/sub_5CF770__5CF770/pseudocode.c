double __userpurge sub_5CF770@<st0>(_DWORD *a1@<ecx>, double st7_0@<st0>, int arg0, _DWORD *a4)
{
  int v4; // edx
  _DWORD *v5; // edi
  int v6; // ebp
  bool v8; // zf
  double Float; // st6
  TESForm *v10; // eax
  EntryData *InventoryEntryOfItem; // eax
  int v12; // edx
  EntryData *v13; // edi
  int v14; // eax
  float v15; // [esp+0h] [ebp-24h]
  float a2; // [esp+4h] [ebp-20h]
  int a3; // [esp+18h] [ebp-Ch]
  double v18; // [esp+1Ch] [ebp-8h]
  float v19; // [esp+28h] [ebp+4h]
  float v20; // [esp+28h] [ebp+4h]
  float v21; // [esp+2Ch] [ebp+8h]
  float v22; // [esp+2Ch] [ebp+8h]
  float v23; // [esp+2Ch] [ebp+8h]
  float v24; // [esp+2Ch] [ebp+8h]
  float v25; // [esp+2Ch] [ebp+8h]
  int v26; // [esp+2Ch] [ebp+8h]

  v4 = arg0; /*0x5cf770*/
  v5 = a4; /*0x5cf77a*/
  v6 = 0; /*0x5cf77e*/
  if ( !a4 ) /*0x5cf784*/
    v5 = (_DWORD *)sub_5CE790(a1, arg0); /*0x5cf78c*/
  if ( v4 < 0x33 ) /*0x5cf791*/
  {
    Tile_SetFloat((Tile *)a1[0xA], 0xFA1u, 1.0); /*0x5cf960*/
  }
  else
  {
    if ( !v5 ) /*0x5cf799*/
      return st7_0; /*0x5cf799*/
    v8 = a1[0xA] == 0; /*0x5cf79f*/
    *((_BYTE *)a1 + 0x50) = 0xFF; /*0x5cf7a2*/
    a1[0xF] = 0; /*0x5cf7a6*/
    if ( !v8 ) /*0x5cf7a9*/
    {
      sub_57DE50(4); /*0x5cf7b2*/
      Float = Tile_GetFloat(v5, 0xFE0); /*0x5cf7c1*/
      a3 = Double_To_SInt32(st7_0); /*0x5cf7cf*/
      v18 = sub_588D90(v5, st7_0); /*0x5cf7d8*/
      v21 = v18 - Tile_GetFloat((_DWORD *)a1[0xA], 0xFBD); /*0x5cf7f1*/
      Tile_SetFloat((Tile *)a1[0xA], 0xFABu, v21); /*0x5cf801*/
      v22 = (float)(2 * a3); /*0x5cf818*/
      v19 = Tile_GetFloat(v5, 0xFCB) - v22; /*0x5cf829*/
      Tile_SetFloat((Tile *)a1[0xA], 0xFCBu, v19); /*0x5cf839*/
      v23 = Tile_GetFloat(v5, 0xFCA) - v22; /*0x5cf852*/
      Tile_SetFloat((Tile *)a1[0xA], 0xFCAu, v23); /*0x5cf862*/
      v24 = (float)a3; /*0x5cf86d*/
      v20 = sub_588C50(v5) + v24; /*0x5cf87e*/
      Tile_SetFloat((Tile *)a1[0xA], 0xFADu, v20); /*0x5cf88e*/
      st7_0 = sub_588CF0(v5); /*0x5cf895*/
      v25 = Float + v24; /*0x5cf8a2*/
      Tile_SetFloat((Tile *)a1[0xA], 0xFACu, v25); /*0x5cf8b2*/
      Tile_SetFloat((Tile *)a1[0xA], 0xFA1u, fConstant_2); /*0x5cf8c9*/
      a1[0xF] = v5; /*0x5cf8d0*/
      Tile_GetFloat(v5, 0xFB9); /*0x5cf8da*/
      v10 = (TESForm *)Double_To_SInt32(st7_0); /*0x5cf8df*/
      InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v10, 0); /*0x5cf8eb*/
      v13 = InventoryEntryOfItem; /*0x5cf8f3*/
      if ( a1[0x12] ) /*0x5cf8f0*/
      {
        v26 = *((unsigned __int16 *)OblivionDynamicCast( /*0x5cf922*/
                                      InventoryEntryOfItem->type,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                      &TESEnchantableForm `RTTI Type Descriptor',
                                      0)
              + 4);
        a2 = EquippedEntryData_GetCharge(v13); /*0x5cf926*/
        v15 = (float)v26; /*0x5cf92e*/
        sub_5483E0(v15, a2); /*0x5cf931*/
        v6 = v14; /*0x5cf939*/
      }
      if ( v13 ) /*0x5cf93e*/
      {
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)v13, v12); /*0x5cf942*/
        FormHeapFree((unsigned int)v13); /*0x5cf948*/
      }
    }
  }
  if ( a1[0x12] ) /*0x5cf965*/
    sub_5CEF60((_DWORD **)a1, v6); /*0x5cf96e*/
  return st7_0; /*0x5cf973*/
}
