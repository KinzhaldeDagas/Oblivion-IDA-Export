BSStringT *__userpurge sub_5B8D00@<eax>(
        int this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        char *a5,
        signed int a6)
{
  unsigned int *TileFromTemplate; // eax
  BSStringT *v7; // edi
  int i; // edx
  char *v9; // eax
  char v10; // cl
  float a2; // [esp+0h] [ebp-110h]
  char v13[255]; // [esp+Ch] [ebp-104h] BYREF
  char v14; // [esp+10Bh] [ebp-5h]

  TileFromTemplate = Menu_CreateTileFromTemplate(
                       (_DWORD *)this,
                       st5_0,
                       st6_0,
                       a4,
                       *(TileWindow **)(this + 0x48),
                       "item_template",
                       0);
  v7 = (BSStringT *)TileFromTemplate;
  if ( TileFromTemplate )
  {
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFAF, a5);
    for ( i = 0; i < 0x100; ++i )
    {
      v9 = &v13[i];
      v10 = v13[i + a5 - v13];
      v13[i] = v10;
      if ( v10 == 0x20 )
        *v9 = 0x5F;
      if ( !*v9 )
        break;
    }
    v14 = 0;
    BSStringT_Set(v7 + 1, v13, 0);
  }
  a2 = (float)a6;
  Tile_SetFloat((Tile *)v7, (_DWORD *)0xFA8, a2);
  return v7;
}
