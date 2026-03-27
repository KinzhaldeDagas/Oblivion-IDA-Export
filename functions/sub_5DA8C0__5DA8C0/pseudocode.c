void __userpurge sub_5DA8C0(
        int this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        char *a5,
        int a6,
        int a7)
{
  unsigned int *TileFromTemplate; // eax
  double v8; // st7
  unsigned int *v9; // esi
  double v10; // st7
  float a2; // [esp+0h] [ebp-8h]
  float a2a; // [esp+0h] [ebp-8h]

  TileFromTemplate = Menu_CreateTileFromTemplate(
                       (_DWORD *)this,
                       st5_0,
                       st6_0,
                       st7_0,
                       *(TileWindow **)(this + 0x4C),
                       "stat_misc_template",
                       0);
  v8 = (double)a7;
  v9 = TileFromTemplate;
  if ( a7 < 0 )
    v8 = v8 + flt_A2FC78;
  a2 = v8;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, a2);
  Tile_SetString(v9, (_DWORD *)0xFAF, a5);
  v10 = (double)a6;
  if ( a6 < 0 )
    v10 = v10 + flt_A2FC78;
  a2a = v10;
  Tile_SetFloat((Tile *)v9, (_DWORD *)0xFB0, a2a);
}
