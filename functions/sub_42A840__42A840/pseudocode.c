_BYTE *__thiscall sub_42A840(_BYTE *this)
{
  *(this + 4) = 0x41; /*0x42a844*/
  *((_DWORD *)this + 2) = 0; /*0x42a848*/
  *(_DWORD *)this = &ExtraItemDropper::`vftable'; /*0x42a84b*/
  *((_DWORD *)this + 3) = 0; /*0x42a851*/
  return this; /*0x42a854*/
}
