BSStringT *__userpurge sub_5971E0@<eax>(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char *a5,
        int a6,
        signed int a7,
        signed int a8)
{
  BSStringT *TileFromTemplate; // esi
  int i; // edx
  char *v11; // eax
  char v12; // cl
  char *v13; // eax
  float a2; // [esp+0h] [ebp-11Ch]
  float a2a; // [esp+0h] [ebp-11Ch]
  char v17[255]; // [esp+18h] [ebp-104h] BYREF
  char v18; // [esp+117h] [ebp-5h]

  TileFromTemplate = (BSStringT *)Menu_CreateTileFromTemplate(
                                    (_DWORD *)a1,
                                    st5_0,
                                    a3,
                                    a4,
                                    *(TileWindow **)(a1 + 0x28),
                                    "class_template",
                                    0);
  if ( !TileFromTemplate )
    return 0;
  for ( i = 0; i < 0x100; ++i )
  {
    v11 = &v17[i];
    v12 = v17[i + a5 - v17];
    v17[i] = v12;
    if ( v12 == 0x20 )
      *v11 = 0x5F;
    if ( !*v11 )
      break;
  }
  v18 = 0;
  BSStringT_Set(TileFromTemplate + 1, v17, 0);
  a2 = (float)a7;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, a2);
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFAF, a5);
  if ( a6 == *(_DWORD *)(a1 + 0x40) )
    *(_DWORD *)(a1 + 0x34) = TileFromTemplate;
  if ( !a8 )
  {
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB0, 1.0);
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, 1.0);
    return TileFromTemplate;
  }
  a2a = (float)a8;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, a2a);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB0, fConstant_2);
  if ( !a6 )
    return TileFromTemplate;
  v13 = *(char **)(a6 + 0x30);
  if ( !v13 )
    v13 = EmptyString;
  Tile_SetString(*(_DWORD **)(a1 + 4), (_DWORD *)0xFC3, v13);
  return TileFromTemplate;
}
