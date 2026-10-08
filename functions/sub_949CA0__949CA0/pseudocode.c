_WORD *__thiscall sub_949CA0(_WORD *this, _OWORD *a2)
{
  *(this + 3) = 1; /*0x949ca5*/
  *((_DWORD *)this + 0x14) = 0; /*0x949cab*/
  *((_DWORD *)this + 0x15) = 2; /*0x949cb2*/
  *((_OWORD *)this + 1) = 0; /*0x949cbc*/
  *((_OWORD *)this + 2) = 0; /*0x949cc0*/
  *((_OWORD *)this + 3) = 0; /*0x949cc4*/
  *((_DWORD *)this + 4) = 0x3F800000; /*0x949ccd*/
  *((_DWORD *)this + 9) = 0x3F800000; /*0x949cd0*/
  *((_DWORD *)this + 0xE) = 0x3F800000; /*0x949cd3*/
  *((_OWORD *)this + 4) = 0; /*0x949cd9*/
  *(_DWORD *)this = &off_A9D378; /*0x949cdd*/
  *((_OWORD *)this + 6) = *a2; /*0x949ce6*/
  *((_OWORD *)this + 6) = *a2; /*0x949cf0*/
  return this; /*0x949cf6*/
}
