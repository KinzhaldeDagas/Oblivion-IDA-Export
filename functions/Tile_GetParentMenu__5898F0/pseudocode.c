int __thiscall Tile_GetParentMenu(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax

  v1 = this;
  if ( !this )
    return Tile_GetParentMenu_::Return_0();
  while ( 1 )
  {
    v2 = v1[4];
    if ( !v2 || !*(_DWORD *)(v2 + 0x10) )
      break;
    v1 = (_DWORD *)v1[4];
  }
  if ( v1 && (*(int (__thiscall **)(_DWORD *))(*v1 + 0xC))(v1) == 0x389 )
    return v1[0x11];
  else
    return Tile_GetParentMenu_::Return_0();
}
