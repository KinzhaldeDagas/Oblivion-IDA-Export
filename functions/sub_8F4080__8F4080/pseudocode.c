_WORD *__thiscall sub_8F4080(_WORD *this, _OWORD *a2, _OWORD *a3, int a4, int a5, int a6)
{
  *(this + 3) = 1; /*0x8f4088*/
  *((_DWORD *)this + 0x14) = 0; /*0x8f408e*/
  *((_DWORD *)this + 0x15) = 8; /*0x8f4095*/
  *((_OWORD *)this + 1) = 0; /*0x8f409f*/
  *((_OWORD *)this + 2) = 0; /*0x8f40a3*/
  *((_OWORD *)this + 3) = 0; /*0x8f40a7*/
  *((_DWORD *)this + 4) = 0x3F800000; /*0x8f40b0*/
  *((_DWORD *)this + 9) = 0x3F800000; /*0x8f40b3*/
  *((_DWORD *)this + 0xE) = 0x3F800000; /*0x8f40b6*/
  *((_OWORD *)this + 4) = 0; /*0x8f40bc*/
  *((_DWORD *)this + 0x21) = a5; /*0x8f40c0*/
  *((_DWORD *)this + 0x22) = a6; /*0x8f40c9*/
  *(_DWORD *)this = &off_A9B304; /*0x8f40d2*/
  *((_OWORD *)this + 6) = *a2; /*0x8f40de*/
  *((_OWORD *)this + 7) = *a3; /*0x8f40e8*/
  *((_DWORD *)this + 0x20) = a4; /*0x8f40ec*/
  return this; /*0x8f40f4*/
}
