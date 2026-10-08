int __thiscall Tile_GetParentMenu(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax

  v1 = this; /*0x5898f1*/
  if ( !this ) /*0x5898f5*/
    return Tile_GetParentMenu_::Return_0(); /*0x5898f5*/
  while ( 1 ) /*0x5898f7*/
  {
    v2 = v1[4]; /*0x5898f7*/
    if ( !v2 || !*(_DWORD *)(v2 + 0x10) ) /*0x5898fe*/
      break; /*0x5898fe*/
    v1 = (_DWORD *)v1[4]; /*0x589904*/
  }
  if ( v1 && (*(int (__thiscall **)(_DWORD *))(*v1 + 0xC))(v1) == 0x389 ) /*0x589920*/
    return v1[0x11]; /*0x589922*/
  else
    return Tile_GetParentMenu_::Return_0(); /*0x589909*/
}
