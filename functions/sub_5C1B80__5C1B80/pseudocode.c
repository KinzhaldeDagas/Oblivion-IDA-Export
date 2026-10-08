void __usercall sub_5C1B80(
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        int a4@<ebx>,
        int a5@<ebp>,
        int a6@<edi>,
        int a7@<esi>,
        double a8@<st7>,
        double a9@<st6>,
        double a10@<st5>,
        double a11@<st4>,
        int a12)
{
  _DWORD *OpenMenuTile; // eax
  Tile **ParentMenu; // eax
  Tile **v14; // esi
  double v15; // st7
  int v16; // ebp
  int *v17; // ebx
  Tile **v18; // edi
  TESForm *v19; // esi
  _DWORD *v20; // eax
  const char *v21; // eax
  CHAR *v22; // eax
  float a2; // [esp+0h] [ebp-120h]
  float a2a; // [esp+0h] [ebp-120h]
  int v25; // [esp+4h] [ebp-11Ch]
  int v26; // [esp+8h] [ebp-118h]
  int v27; // [esp+Ch] [ebp-114h]
  int v28; // [esp+10h] [ebp-110h]
  char v29; // [esp+14h] [ebp-10Ch]
  char a3[260]; // [esp+18h] [ebp-108h] BYREF

  PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x5c1b94*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x416); /*0x5c1b9e*/
  if ( OpenMenuTile /*0x5c1bbe*/
    || (sub_5C1290(st5_0, st6_0, st7_0, a8, a9, a10, a11), (OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x416)) != 0) )
  {
    v28 = a4; /*0x5c1bc4*/
    v27 = a5; /*0x5c1bc5*/
    v26 = a7; /*0x5c1bc6*/
    v25 = a6; /*0x5c1bc7*/
    ParentMenu = (Tile **)Tile_GetParentMenu(OpenMenuTile); /*0x5c1bca*/
    v14 = ParentMenu; /*0x5c1bcf*/
    if ( ParentMenu && ParentMenu[9] == (Tile *)2 || ParentMenu[9] == (Tile *)4 ) /*0x5c1bdf*/
      Menu::StartFadeIn(ParentMenu); /*0x5c1be3*/
    a2 = flt_A40098; /*0x5c1bef*/
    unk_B3B43D = 1; /*0x5c1bf2*/
    Tile_SetFloat(v14[0xA], 0xFA7u, a2); /*0x5c1c01*/
    if ( a12 >= 0 ) /*0x5c1c0f*/
    {
      v29 = a12 + 1; /*0x5c1c14*/
      a2a = (float)(a12 + 1); /*0x5c1c20*/
      Tile_SetFloat(v14[0xB], 0xFAEu, a2a); /*0x5c1c28*/
    }
    Tile_SetFloat(v14[0xB], 0xFA1u, fConstant_2); /*0x5c1c3f*/
    Tile_SetFloat(v14[0xB], 0xFB0u, 1.0); /*0x5c1c52*/
    v15 = fConstant_2; /*0x5c1c57*/
    Tile_SetFloat(v14[0xB], 0xFB1u, fConstant_2); /*0x5c1c69*/
    sub_58FBA0((int)v14[0xB], st5_0, st6_0, v15, 0); /*0x5c1c73*/
    v16 = 0; /*0x5c1c78*/
    v17 = unk_B3B444; /*0x5c1c7a*/
    v18 = v14 + 0xC; /*0x5c1c7f*/
    do /*0x5c1dab*/
    {
      if ( v17[2] ) /*0x5c1c82*/
      {
        v19 = *(TESForm **)(*v17 + 8); /*0x5c1c8e*/
        v20 = OblivionDynamicCast( /*0x5c1ca0*/
                v19,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &SpellItem `RTTI Type Descriptor',
                0);
        if ( v20 ) /*0x5c1caa*/
        {
          v21 = *(const char **)(*(_DWORD *)(EffectItemList_GetStrongestItem(v20 + 9, 3, 0, v25, v26, v27, v28, v29) /*0x5c1cbe*/
                                           + 0x1C)
                               + 0x48);
          if ( !v21 ) /*0x5c1cc3*/
            v21 = EmptyString; /*0x5c1cc5*/
          _sprintf(a3, "%s\\%s\\%s", "Menus", "Icons", v21); /*0x5c1cdf*/
        }
        else
        {
          v22 = sub_5C0C50(v19); /*0x5c1cea*/
          _sprintf(a3, "%s\\%s\\%s", "Menus", "Icons", v22); /*0x5c1d04*/
        }
        Tile_SetString(*v18, (_DWORD *)0xFE6, a3); /*0x5c1d18*/
        if ( v16 == a12 ) /*0x5c1d24*/
          sub_5C16E0(st6_0, v19, 0, 1); /*0x5c1d2b*/
        Tile_SetFloat(*v18, 0xFA7u, flt_A40098); /*0x5c1d44*/
        Tile_SetFloat(*v18, 0xFA1u, fConstant_2); /*0x5c1d5a*/
      }
      else
      {
        Tile_SetFloat(*v18, 0xFA7u, 0.0); /*0x5c1d6e*/
        Tile_SetFloat(*v18, 0xFA1u, 1.0); /*0x5c1d80*/
        if ( v16 == sub_5C1100() ) /*0x5c1d8c*/
          sub_5C16E0(st6_0, 0, 0, 1); /*0x5c1d94*/
      }
      v17 += 4; /*0x5c1d9c*/
      ++v16; /*0x5c1d9f*/
      ++v18; /*0x5c1da2*/
    }
    while ( (int)v17 < (int)&unk_B3B4C4 ); /*0x5c1dab*/
  }
}
