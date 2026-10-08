// AchievementsNative evidence: target eligibility helper returns true when the tile and ancestors are not suppressed by the observed flag path; inventory hover uses it before accepting header/item targets.
bool __thiscall Tile::IsVisible(Tile *this)
{
  int v1; // eax
  char v2; // dl
  int i; // eax
  int v4; // ecx

  v1 = *((_DWORD *)this + 9); /*0x5893b0*/
  v2 = 0; /*0x5893b3*/
  if ( v1 ) /*0x5893b7*/
    v2 = *(_BYTE *)(v1 + 0x18) & 1; /*0x5893bc*/
  for ( i = *((_DWORD *)this + 4); i; i = *(_DWORD *)(i + 0x10) ) /*0x5893c4*/
  {
    v4 = *(_DWORD *)(i + 0x24); /*0x5893c6*/
    if ( v4 ) /*0x5893cb*/
      v2 |= *(_BYTE *)(v4 + 0x18) & 1; /*0x5893d3*/
  }
  return v2 == 0; /*0x5893e3*/
}
