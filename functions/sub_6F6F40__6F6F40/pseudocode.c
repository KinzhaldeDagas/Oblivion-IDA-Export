_DWORD *__thiscall sub_6F6F40(_DWORD *this)
{
  _DWORD *result; // eax

  *(this + 8) = this + 6; /*0x6f6f43*/
  *(this + 9) = this + 7; /*0x6f6f49*/
  *(this + 4) = this + 2; /*0x6f6f4f*/
  *(this + 0xC) = this + 0xA; /*0x6f6f55*/
  *(this + 5) = this + 3; /*0x6f6f5b*/
  *(this + 0xD) = this + 0xB; /*0x6f6f61*/
  *(this + 3) = 0; /*0x6f6f64*/
  *(_DWORD *)*(this + 9) = 0; /*0x6f6f6d*/
  *(_DWORD *)*(this + 0xD) = 0; /*0x6f6f76*/
  *(_DWORD *)*(this + 4) = 0; /*0x6f6f7f*/
  *(_DWORD *)*(this + 8) = 0; /*0x6f6f88*/
  result = (_DWORD *)*(this + 0xC); /*0x6f6f8e*/
  *result = 0; /*0x6f6f91*/
  return result; /*0x6f6f97*/
}
