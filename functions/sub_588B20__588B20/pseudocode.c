// Verified: sets Tile byte +5 recursively for unreleased/non-releasing descendants. Value calculation tests owner +5 to suppress evaluation during teardown.
void __thiscall Tile::MarkSubtreeReleasing(Tile *this)
{
  _DWORD *v1; // esi
  Tile *v2; // ecx

  if ( !*((_BYTE *)this + 4) && !*((_BYTE *)this + 5) ) /*0x588b26*/
  {
    v1 = *((_DWORD **)this + 0xD); /*0x588b2d*/
    *((_BYTE *)this + 5) = 1; /*0x588b32*/
    while ( v1 ) /*0x588b36*/
    {
      v2 = (Tile *)v1[2]; /*0x588b38*/
      v1 = (_DWORD *)*v1; /*0x588b3e*/
      Tile::MarkSubtreeReleasing(v2); /*0x588b40*/
    }
  }
}
