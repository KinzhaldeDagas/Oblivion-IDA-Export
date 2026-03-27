int __fastcall sub_459400(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  _DWORD *OpenMenuTile; // eax
  int result; // eax

  v3 = (_DWORD *)*(this + 0x1B);
  if ( v3 )
  {
    do
    {
      if ( *v3 )
        (**(void (__thiscall ***)(_DWORD, int))*v3)(*v3, 1);
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
    BSSimpleList_Clear((_DWORD *)*(this + 0x1B));
    FormHeapFree(*(this + 0x1B));
    *(this + 0x1B) = 0;
  }
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40E);
  result = Tile_GetParentMenu(OpenMenuTile);
  if ( result )
    *(_DWORD *)(result + 0x4C) = 0;
  return result;
}
