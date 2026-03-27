double __thiscall sub_5894A0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = *(this + 0xA);
  if ( !v2 )
    return Tile_GetFloat(this, a2);
  while ( *(_DWORD *)(v2 + 4) != a2 )
  {
    v2 = *(_DWORD *)(v2 + 0x14);
    if ( !v2 )
      return Tile_GetFloat(this, a2);
  }
  return *(float *)(v2 + 0xC);
}
