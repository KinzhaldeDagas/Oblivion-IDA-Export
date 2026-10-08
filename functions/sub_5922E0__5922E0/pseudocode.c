// Verified vtable +0x14 callback, counterpart of Fallout 0x822094F0. Handles string 0xFDE and text metric trait 0xFD1 by marking text dirty and returning this when handled; otherwise returns NULL, allowing FinalPostParse.
Tile *__thiscall TileText::PostParse(TileText *this, unsigned int trait, float value, const char *text)
{
  CHAR *v5; // eax

  if ( trait == 0xFDE ) /*0x5922f0*/
  {
    if ( !sub_588C10(this, 0xFDE) && text /*0x592322*/
      || sub_588C10(this, 0xFDE)
      && (v5 = sub_588C10(this, 0xFDE), !_mbscmp((const unsigned __int8 *)text, (const unsigned __int8 *)v5)) )
    {
LABEL_6:
      *((_DWORD *)this + 0xB) |= 2u; /*0x59232e*/
      return this; /*0x592339*/
    }
  }
  else if ( trait == 0xFD1 && value != Tile_GetFloat(this, 0xFD1) ) /*0x59235c*/
  {
    goto LABEL_6; /*0x59235c*/
  }
  return 0; /*0x592332*/
}
