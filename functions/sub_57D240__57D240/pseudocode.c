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

  v2 = 0; /*0x57d240*/
  v3 = this + 0x38; /*0x57d242*/
  while ( *v3 ) /*0x57d24b*/
  {
    ++v2; /*0x57d24d*/
    ++v3; /*0x57d250*/
    if ( v2 >= 0xA ) /*0x57d256*/
    {
      v2 = *(this + 0x41); /*0x57d258*/
      goto LABEL_7; /*0x57d25e*/
    }
  }
  if ( v2 ) /*0x57d26f*/
    v2 = *(this + v2 + 0x37); /*0x57d271*/
LABEL_7:
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(v2); /*0x57d278*/
  v5 = OpenMenuTile; /*0x57d27f*/
  result = 1; /*0x57d2bb*/
  if ( OpenMenuTile ) /*0x57d286*/
  {
    Float = Tile_GetFloat(OpenMenuTile, 0xFA5); /*0x57d28f*/
    v7 = Double_To_SInt32(Float); /*0x57d294*/
    if ( v7 == 0x66 || v7 == 0x1776 ) /*0x57d2a3*/
    {
      ParentMenu = Tile_GetParentMenu(v5); /*0x57d2b0*/
      if ( Tile_GetParentMenu(a2) != ParentMenu ) /*0x57d2b9*/
        return 0; /*0x57d286*/
    }
  }
  return result; /*0x57d2be*/
}
