_BYTE *__thiscall ExtraCellMusicType_Constructor(_BYTE *this, char a2)
{
  *(this + 4) = 0xB; /*0x41d966*/
  *((_DWORD *)this + 2) = 0; /*0x41d96a*/
  *(_DWORD *)this = &ExtraCellMusicType::`vftable'; /*0x41d971*/
  *(this + 0xC) = a2; /*0x41d977*/
  return this; /*0x41d97a*/
}
