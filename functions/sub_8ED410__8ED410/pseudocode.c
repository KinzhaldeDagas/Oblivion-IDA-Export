_WORD *__thiscall sub_8ED410(_WORD *this, int a2)
{
  *(this + 3) = 1; /*0x8ed416*/
  *((_DWORD *)this + 2) = 0; /*0x8ed41c*/
  *((_DWORD *)this + 3) = a2; /*0x8ed423*/
  *(_DWORD *)this = &off_A9B078; /*0x8ed426*/
  return this; /*0x8ed42c*/
}
