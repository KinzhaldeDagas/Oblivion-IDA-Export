BSStringT *__thiscall sub_5B8D00(int this, char *arg0, signed int a3)
{
  Tile *v6; // eax
  BSStringT *v7; // edi
  int i; // edx
  char *v9; // eax
  char v10; // cl
  float a2; // [esp+0h] [ebp-110h]
  char v13[255]; // [esp+Ch] [ebp-104h] BYREF
  char v14; // [esp+10Bh] [ebp-5h]

  v6 = Menu::RenderTemplate((Menu *)this, *(Tile **)(this + 0x48), "item_template", 0); /*0x5b8d28*/
  v7 = (BSStringT *)v6; /*0x5b8d2d*/
  if ( v6 ) /*0x5b8d31*/
  {
    Tile_SetString(v6, (_DWORD *)0xFAF, arg0); /*0x5b8d3b*/
    for ( i = 0; i < 0x100; ++i ) /*0x5b8d44*/
    {
      v9 = &v13[i]; /*0x5b8d50*/
      v10 = v13[i + arg0 - v13]; /*0x5b8d54*/
      v13[i] = v10; /*0x5b8d5a*/
      if ( v10 == 0x20 ) /*0x5b8d5c*/
        *v9 = 0x5F; /*0x5b8d5e*/
      if ( !*v9 ) /*0x5b8d61*/
        break; /*0x5b8d64*/
    }
    v14 = 0; /*0x5b8d7b*/
    BSStringT_Set(v7 + 1, v13, 0); /*0x5b8d83*/
  }
  a2 = (float)a3; /*0x5b8d92*/
  Tile_SetFloat((Tile *)v7, 0xFA8u, a2); /*0x5b8d9a*/
  return v7; /*0x5b8d9f*/
}
