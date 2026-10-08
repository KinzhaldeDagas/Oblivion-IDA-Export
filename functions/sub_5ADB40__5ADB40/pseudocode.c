void __usercall sub_5ADB40(double a1@<st2>, double a2@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  _DWORD *v3; // esi
  int ParentMenu; // esi
  bool v5; // cc

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EF); /*0x5adb46*/
  v3 = OpenMenuTile; /*0x5adb4b*/
  if ( OpenMenuTile ) /*0x5adb52*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x5adb56*/
    {
      if ( !MEMORY[0xB333A0]->unk51 && !MEMORY[0xB333A0]->unk52 ) /*0x5adb6a*/
      {
        ParentMenu = Tile_GetParentMenu(v3); /*0x5adb77*/
        if ( *(_BYTE *)(ParentMenu + 0x71) ) /*0x5adb79*/
        {
          OSGlobals_PurgeModels(1); /*0x5adb87*/
          *(_BYTE *)(ParentMenu + 0x71) = 0; /*0x5adb8c*/
        }
        v5 = *(_DWORD *)(ParentMenu + 0x60) < 0x64; /*0x5adb96*/
        *(_BYTE *)(ParentMenu + 0x70) = 1; /*0x5adb99*/
        *(_DWORD *)(ParentMenu + 0x3C) = 0x64; /*0x5adb9d*/
        if ( v5 ) /*0x5adba0*/
        {
          do /*0x5adbaf*/
            a2 = sub_5AD980(a1, a2, 0); /*0x5adba4*/
          while ( *(int *)(ParentMenu + 0x60) < 0x64 ); /*0x5adbaf*/
        }
        *(_BYTE *)(ParentMenu + 0x70) = 0; /*0x5adbb1*/
      }
    }
  }
}
