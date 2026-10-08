int __fastcall sub_459400(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  _DWORD *OpenMenuTile; // eax
  int result; // eax

  v3 = (_DWORD *)*(this + 0x1B); /*0x459404*/
  if ( v3 ) /*0x459409*/
  {
    do /*0x459423*/
    {
      if ( *v3 ) /*0x459410*/
        (**(void (__thiscall ***)(_DWORD, int))*v3)(*v3, 1); /*0x45941c*/
      v3 = (_DWORD *)v3[1]; /*0x45941e*/
    }
    while ( v3 ); /*0x459423*/
    BSSimpleList_Clear((_DWORD *)*(this + 0x1B)); /*0x459428*/
    FormHeapFree(*(this + 0x1B)); /*0x459431*/
    *(this + 0x1B) = 0; /*0x459439*/
  }
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40E); /*0x5ae435*/
  result = Tile_GetParentMenu(OpenMenuTile); /*0x5ae43f*/
  if ( result ) /*0x5ae446*/
    *(_DWORD *)(result + 0x4C) = 0; /*0x5ae448*/
  return result; /*0x5ae44f*/
}
