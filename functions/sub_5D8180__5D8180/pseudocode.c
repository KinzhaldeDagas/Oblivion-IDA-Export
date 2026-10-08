void __thiscall sub_5D8180(int this)
{
  int v4; // esi
  int v5; // eax
  int *v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebx
  int v9; // ebp
  _DWORD *v10; // edi
  Tile *v11; // eax
  BSStringT *v12; // esi
  char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  float a2; // [esp+0h] [ebp-130h]
  float a2a; // [esp+0h] [ebp-130h]
  float a2b; // [esp+0h] [ebp-130h]
  float a2c; // [esp+0h] [ebp-130h]
  bool v20; // [esp+17h] [ebp-119h]
  int a3; // [esp+18h] [ebp-118h]
  int i; // [esp+1Ch] [ebp-114h]
  char v24[260]; // [esp+28h] [ebp-108h] BYREF

  v4 = this; /*0x5d8197*/
  sub_5893F0(*(_DWORD **)(this + 0x2C)); /*0x5d81a0*/
  v5 = *(_DWORD *)(v4 + 0x74); /*0x5d81a5*/
  v20 = 0; /*0x5d81aa*/
  if ( v5 ) /*0x5d81af*/
    v6 = (int *)(v5 + 0x28); /*0x5d81b1*/
  else
    v6 = 0; /*0x5d81b6*/
  do /*0x5d81d5*/
  {
    if ( !v6 ) /*0x5d81ba*/
      break; /*0x5d81ba*/
    v7 = *v6; /*0x5d81bc*/
    if ( !*v6 ) /*0x5d81bc*/
      break; /*0x5d81c0*/
    v6 = (int *)v6[1]; /*0x5d81c8*/
    v20 = (*(_DWORD *)(*(_DWORD *)(v7 + 0x1C) + 0x58) & 0x40000) != 0; /*0x5d81d1*/
  }
  while ( (*(_DWORD *)(*(_DWORD *)(v7 + 0x1C) + 0x58) & 0x40000) == 0 ); /*0x5d81d5*/
  v8 = *(_DWORD **)(v4 + 0x58); /*0x5d81d7*/
  v9 = 0; /*0x5d81da*/
  a3 = 0; /*0x5d81de*/
  for ( i = 0; v8; ++a3 ) /*0x5d81ea*/
  {
    v10 = (_DWORD *)*v8; /*0x5d81f1*/
    if ( *v8 ) /*0x5d81f1*/
    {
      if ( !EffectItemList_HasEffect((_DWORD *)(*(_DWORD *)(v4 + 0x74) + 0x24), v10[0x26], 0x48) /*0x5d8226*/
        && (!v20 || (v10[0x16] & 0x40000) == 0) )
      {
        v11 = Menu::RenderTemplate((Menu *)v4, *(Tile **)(v4 + 0x2C), "known_effect_template", 0); /*0x5d8239*/
        v12 = (BSStringT *)v11; /*0x5d823e*/
        if ( v11 ) /*0x5d8242*/
        {
          a2 = (float)a3; /*0x5d824f*/
          Tile_SetFloat(v11, 0xFAEu, a2); /*0x5d8257*/
          a2a = (float)(v9 + 0x3E8); /*0x5d826d*/
          Tile_SetFloat((Tile *)v12, 0xFA8u, a2a); /*0x5d8275*/
          a2b = (float)i; /*0x5d8281*/
          Tile_SetFloat((Tile *)v12, 0xFAAu, a2b); /*0x5d8289*/
          v13 = (char *)v10[0xF]; /*0x5d828e*/
          if ( !v13 ) /*0x5d8293*/
            v13 = EmptyString; /*0x5d8295*/
          Tile_SetString(v12, (_DWORD *)0xFB1, v13); /*0x5d82a2*/
          v14 = (const char *)v10[0xF]; /*0x5d82a7*/
          if ( !v14 ) /*0x5d82ac*/
            v14 = EmptyString; /*0x5d82ae*/
          BSStringT_Set(v12 + 1, v14, 0); /*0x5d82b9*/
          v15 = (const char *)v10[0x12]; /*0x5d82be*/
          if ( !v15 ) /*0x5d82c3*/
            v15 = EmptyString; /*0x5d82c5*/
          _sprintf(v24, "%s\\%s", "Icons", v15); /*0x5d82da*/
          Tile_SetString(v12, (_DWORD *)0xFAF, v24); /*0x5d82ee*/
          a2c = (float)(int)v10[0x26]; /*0x5d82fc*/
          Tile_SetFloat((Tile *)v12, 0xFB2u, a2c); /*0x5d8304*/
          Tile_SetFloat((Tile *)v12, 0xFB4u, flt_A31C80); /*0x5d831a*/
          Tile_SetFloat((Tile *)v12, 0xFC9u, fConstant_2); /*0x5d8330*/
          i = ++v9; /*0x5d8338*/
        }
        v4 = this; /*0x5d833c*/
      }
    }
    v8 = (_DWORD *)v8[1]; /*0x5d8340*/
  }
}
