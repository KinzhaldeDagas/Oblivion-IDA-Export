void __cdecl sub_5A65B0(int a1)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v2; // esi
  int ParentMenu; // eax
  int v4; // edx
  int v5; // ebx
  _BYTE *v6; // ecx
  TESModel *v7; // eax
  char *ModelPath; // eax
  float Float; // [esp+0h] [ebp-18h]
  float v10; // [esp+4h] [ebp-14h]
  float v11; // [esp+8h] [ebp-10h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
  v2 = OpenMenuTile;
  if ( OpenMenuTile && Tile_GetParentMenu(OpenMenuTile) )
  {
    ParentMenu = Tile_GetParentMenu(v2);
    v4 = dword_B3B344;
    v5 = ParentMenu;
    if ( *(_BYTE *)(a1 + 4) )
    {
      v6 = *(_BYTE **)a1;
      if ( *(_DWORD *)a1 != v4 )
      {
        dword_B3B344 = (int)v6;
        if ( v6 )
        {
          if ( sub_4D7730(v6) )
          {
            v7 = (TESModel *)sub_4D7730(*(_BYTE **)a1);
            ModelPath = TESModel_GetModelPath(v7);
            Tile_SetString(v2, (_DWORD *)0xFB6, ModelPath);
            v11 = flt_A41304;
            v10 = flt_A6BED0;
            Float = Tile_GetFloat(v2, 0xFB5);
            sub_589980(v2, 0xFB5, Float, v10, v11);
            *(_DWORD *)(v5 + 0x74) = GetTickCount() + 0x1388;
          }
        }
        return;
      }
    }
    else if ( *(_DWORD *)a1 == v4 )
    {
      dword_B3B344 = 0;
      return;
    }
    if ( *(_BYTE *)(a1 + 5) )
      dword_B3B344 = *(_DWORD *)a1;
  }
}
