void __cdecl sub_5B5B70(char a1)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // esi
  double Float; // st7
  InterfaceManager *Singleton; // eax
  double v5; // st7
  double v6; // st7
  InterfaceManager *v7; // eax
  float a2; // [esp+0h] [ebp-Ch]
  float a2a; // [esp+0h] [ebp-Ch]
  _DWORD *v10; // [esp+8h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414); /*0x5b5b76*/
  if ( OpenMenuTile ) /*0x5b5b80*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5b5b8e*/
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(ParentMenu + 0x28), 0xFA1); /*0x5b5b98*/
    if ( a1 ) /*0x5b5ba2*/
    {
      if ( fConstant_2 == Float ) /*0x5b5bb3*/
        return; /*0x5b5bb3*/
      Tile_SetFloat(*(Tile **)(ParentMenu + 0x28), (_DWORD *)0xFA1, fConstant_2); /*0x5b5bc5*/
      InterfaceManager_GetSingleton(0, 1); /*0x5b5bce*/
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5b5bd7*/
      v10 = (_DWORD *)++Singleton->unk08C; /*0x5b5bec*/
      v5 = (double)(int)v10; /*0x5b5bf0*/
      if ( (int)v10 < 0 ) /*0x5b5bf4*/
        v5 = v5 + flt_A2FC78; /*0x5b5bf6*/
      a2 = v5; /*0x5b5bff*/
      Tile_SetFloat(*(Tile **)(ParentMenu + 0x28), (_DWORD *)0xFF0, a2); /*0x5b5c0b*/
      v6 = 1.0; /*0x5b5c10*/
    }
    else
    {
      if ( 1.0 == Float ) /*0x5b5c20*/
        return; /*0x5b5c20*/
      Tile_SetFloat(*(Tile **)(ParentMenu + 0x28), (_DWORD *)0xFA1, 1.0); /*0x5b5c2e*/
      InterfaceManager_GetSingleton(0, 1); /*0x5b5c37*/
      v7 = InterfaceManager_GetSingleton(0, 1); /*0x5b5c40*/
      v6 = (double)(int)++v7->unk08C; /*0x5b5c4c*/
      if ( (int)v7->unk08C < 0 ) /*0x5b5c5f*/
        v6 = v6 + flt_A2FC78; /*0x5b5c61*/
    }
    a2a = v6; /*0x5b5c6d*/
    Tile_SetFloat(*(Tile **)(ParentMenu + 0x30), (_DWORD *)0xFF0, a2a); /*0x5b5c75*/
  }
}
