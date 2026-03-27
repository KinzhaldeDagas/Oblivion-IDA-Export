void __cdecl sub_5B5B70(char a1)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // esi
  double Float; // st7
  InterfaceManager *Singleton; // eax
  double v7; // st7
  double v8; // st7
  InterfaceManager *v9; // eax
  float a2; // [esp+0h] [ebp-Ch]
  float a2a; // [esp+0h] [ebp-Ch]
  _DWORD *v12; // [esp+8h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(ParentMenu + 0x28), 0xFA1);
    if ( a1 )
    {
      if ( fConstant_2 == Float )
        return;
      Tile_SetFloat(*(Tile **)(ParentMenu + 0x28), (_DWORD *)0xFA1, fConstant_2);
      InterfaceManager_GetSingleton(0, 1);
      Singleton = InterfaceManager_GetSingleton(0, 1);
      v12 = (_DWORD *)++Singleton->unk08C;
      v7 = (double)(int)v12;
      if ( (int)v12 < 0 )
        v7 = v7 + flt_A2FC78;
      a2 = v7;
      Tile_SetFloat(*(Tile **)(ParentMenu + 0x28), (_DWORD *)0xFF0, a2);
      v8 = 1.0;
    }
    else
    {
      if ( 1.0 == Float )
        return;
      Tile_SetFloat(*(Tile **)(ParentMenu + 0x28), (_DWORD *)0xFA1, 1.0);
      InterfaceManager_GetSingleton(0, 1);
      v9 = InterfaceManager_GetSingleton(0, 1);
      v8 = (double)(int)++v9->unk08C;
      if ( (int)v9->unk08C < 0 )
        v8 = v8 + flt_A2FC78;
    }
    a2a = v8;
    Tile_SetFloat(*(Tile **)(ParentMenu + 0x30), (_DWORD *)0xFF0, a2a);
  }
}
