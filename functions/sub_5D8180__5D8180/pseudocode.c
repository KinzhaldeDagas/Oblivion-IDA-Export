void __usercall sub_5D8180(int a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double a4@<st0>)
{
  int v4; // esi
  int v5; // eax
  int *v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebx
  int v9; // ebp
  _DWORD *v10; // edi
  unsigned int *TileFromTemplate; // eax
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

  v4 = a1;
  sub_5893F0(*(_DWORD **)(a1 + 0x2C));
  v5 = *(_DWORD *)(v4 + 0x74);
  v20 = 0;
  if ( v5 )
    v6 = (int *)(v5 + 0x28);
  else
    v6 = 0;
  do
  {
    if ( !v6 )
      break;
    v7 = *v6;
    if ( !*v6 )
      break;
    v6 = (int *)v6[1];
    v20 = (*(_DWORD *)(*(_DWORD *)(v7 + 0x1C) + 0x58) & 0x40000) != 0;
  }
  while ( (*(_DWORD *)(*(_DWORD *)(v7 + 0x1C) + 0x58) & 0x40000) == 0 );
  v8 = *(_DWORD **)(v4 + 0x58);
  v9 = 0;
  a3 = 0;
  for ( i = 0; v8; ++a3 )
  {
    v10 = (_DWORD *)*v8;
    if ( *v8 )
    {
      if ( !EffectItemList_HasEffect((_DWORD *)(*(_DWORD *)(v4 + 0x74) + 0x24), v10[0x26], 0x48)
        && (!v20 || (v10[0x16] & 0x40000) == 0) )
      {
        TileFromTemplate = Menu_CreateTileFromTemplate(
                             (_DWORD *)v4,
                             st5_0,
                             st6_0,
                             a4,
                             *(TileWindow **)(v4 + 0x2C),
                             "known_effect_template",
                             0);
        v12 = (BSStringT *)TileFromTemplate;
        if ( TileFromTemplate )
        {
          a2 = (float)a3;
          Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, a2);
          a2a = (float)(v9 + 0x3E8);
          Tile_SetFloat((Tile *)v12, (_DWORD *)0xFA8, a2a);
          a2b = (float)i;
          Tile_SetFloat((Tile *)v12, (_DWORD *)0xFAA, a2b);
          v13 = (char *)v10[0xF];
          if ( !v13 )
            v13 = EmptyString;
          Tile_SetString(v12, (_DWORD *)0xFB1, v13);
          v14 = (const char *)v10[0xF];
          if ( !v14 )
            v14 = EmptyString;
          BSStringT_Set(v12 + 1, v14, 0);
          v15 = (const char *)v10[0x12];
          if ( !v15 )
            v15 = EmptyString;
          _sprintf(v24, "%s\\%s", "Icons", v15);
          Tile_SetString(v12, (_DWORD *)0xFAF, v24);
          a2c = (float)(int)v10[0x26];
          Tile_SetFloat((Tile *)v12, (_DWORD *)0xFB2, a2c);
          Tile_SetFloat((Tile *)v12, (_DWORD *)0xFB4, flt_A31C80);
          a4 = fConstant_2;
          Tile_SetFloat((Tile *)v12, (_DWORD *)0xFC9, fConstant_2);
          i = ++v9;
        }
        v4 = a1;
      }
    }
    v8 = (_DWORD *)v8[1];
  }
}
