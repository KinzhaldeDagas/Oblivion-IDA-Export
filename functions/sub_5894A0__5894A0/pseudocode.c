double __thiscall sub_5894A0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = *(this + 0xA); /*0x5894a0*/
  if ( !v2 ) /*0x5894a9*/
    return Tile_GetFloat(this, a2); /*0x5894bc*/
  while ( *(_DWORD *)(v2 + 4) != a2 ) /*0x5894b3*/
  {
    v2 = *(_DWORD *)(v2 + 0x14); /*0x5894b5*/
    if ( !v2 ) /*0x5894ba*/
      return Tile_GetFloat(this, a2); /*0x5894ba*/
  }
  return *(float *)(v2 + 0xC); /*0x5894c8*/
}
