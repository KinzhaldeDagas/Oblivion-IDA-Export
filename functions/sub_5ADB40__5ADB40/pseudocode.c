void __usercall sub_5ADB40(double a1@<st2>, double a2@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v3; // esi
  int ParentMenu; // esi
  bool v5; // cc

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF);
  v3 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
    {
      if ( !TES->unk51 && !TES->unk52 )
      {
        ParentMenu = Tile_GetParentMenu(v3);
        if ( *(_BYTE *)(ParentMenu + 0x71) )
        {
          OSGlobals_PurgeModels(1);
          *(_BYTE *)(ParentMenu + 0x71) = 0;
        }
        v5 = *(_DWORD *)(ParentMenu + 0x60) < 0x64;
        *(_BYTE *)(ParentMenu + 0x70) = 1;
        *(_DWORD *)(ParentMenu + 0x3C) = 0x64;
        if ( v5 )
        {
          do
            a2 = sub_5AD980(a1, a2, 0);
          while ( *(int *)(ParentMenu + 0x60) < 0x64 );
        }
        *(_BYTE *)(ParentMenu + 0x70) = 0;
      }
    }
  }
}
