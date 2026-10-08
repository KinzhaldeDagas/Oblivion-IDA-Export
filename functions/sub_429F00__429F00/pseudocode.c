_BYTE *__thiscall sub_429F00(_BYTE *this, char a2)
{
  *(this + 4) = 0x2F; /*0x429f06*/
  *((_DWORD *)this + 2) = 0; /*0x429f0a*/
  *(_DWORD *)this = &ExtraSoul::`vftable'; /*0x429f11*/
  *(this + 0xC) = a2; /*0x429f17*/
  return this; /*0x429f1a*/
}
