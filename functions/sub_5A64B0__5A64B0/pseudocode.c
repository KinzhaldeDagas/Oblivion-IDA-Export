void __cdecl sub_5A64B0(int a1)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v2; // esi
  void *ParentMenu; // eax
  _DWORD *v4; // edi
  char *v5; // eax
  float Float; // [esp+0h] [ebp-14h]
  float v7; // [esp+0h] [ebp-14h]
  float v8; // [esp+4h] [ebp-10h]
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+8h] [ebp-Ch]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
  v2 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v4 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &HUDMainMenu `RTTI Type Descriptor',
           0);
    if ( v4 )
    {
      if ( *(_BYTE *)(a1 + 0xC) )
      {
        if ( *(_DWORD *)a1 == dword_B3B340 )
          return;
        dword_B3B340 = *(_DWORD *)a1;
      }
      v5 = *(char **)(a1 + 4);
      if ( v5 )
      {
        Tile_SetString(v2, (_DWORD *)0xFB6, v5);
        v9 = flt_A41304;
        v8 = flt_A6BED0;
        Float = Tile_GetFloat(v2, 0xFB5);
        sub_589980(v2, 0xFB5, Float, v8, v9);
        v4[0x1D] = GetTickCount() + 0x1388;
      }
      else
      {
        v10 = flt_A41304;
        v7 = Tile_GetFloat(v2, 0xFB5);
        sub_589980(v2, 0xFB5, v7, 0.0, v10);
        v4[0x1D] = 0;
      }
    }
  }
}
