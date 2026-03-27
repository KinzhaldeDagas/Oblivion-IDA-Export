bool __thiscall sub_57D240(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  _DWORD *v3; // edx
  _DWORD *OpenMenuTile; // eax
  _DWORD *v5; // esi
  double Float; // st7
  int v7; // eax
  int ParentMenu; // esi
  bool result; // al

  v2 = 0;
  v3 = this + 0x38;
  while ( *v3 )
  {
    ++v2;
    ++v3;
    if ( v2 >= 0xA )
    {
      v2 = *(this + 0x41);
      goto LABEL_7;
    }
  }
  if ( v2 )
    v2 = *(this + v2 + 0x37);
LABEL_7:
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(v2);
  v5 = OpenMenuTile;
  result = 1;
  if ( OpenMenuTile )
  {
    Float = Tile_GetFloat(OpenMenuTile, 0xFA5);
    v7 = Double_To_SInt32(Float);
    if ( v7 == 0x66 || v7 == 0x1776 )
    {
      ParentMenu = Tile_GetParentMenu(v5);
      if ( Tile_GetParentMenu(a2) != ParentMenu )
        return 0;
    }
  }
  return result;
}
