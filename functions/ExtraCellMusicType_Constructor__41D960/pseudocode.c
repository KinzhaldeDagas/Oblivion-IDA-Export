_BYTE *__thiscall ExtraCellMusicType_Constructor(_BYTE *this, char a2)
{
  *(this + 4) = 0xB;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraCellMusicType::`vftable';
  *(this + 0xC) = a2;
  return this;
}
