_WORD *__thiscall sub_916380(_WORD *this, _OWORD *a2, _OWORD *a3, int a4, int a5, int a6)
{
  *(this + 3) = 1; /*0x916388*/
  *((_DWORD *)this + 0x14) = 0; /*0x91638e*/
  *((_DWORD *)this + 0x15) = 9; /*0x916395*/
  *((_OWORD *)this + 1) = 0; /*0x91639f*/
  *((_OWORD *)this + 2) = 0; /*0x9163a3*/
  *((_OWORD *)this + 3) = 0; /*0x9163a7*/
  *((_DWORD *)this + 4) = 0x3F800000; /*0x9163b0*/
  *((_DWORD *)this + 9) = 0x3F800000; /*0x9163b3*/
  *((_DWORD *)this + 0xE) = 0x3F800000; /*0x9163b6*/
  *((_OWORD *)this + 4) = 0; /*0x9163bc*/
  *((_DWORD *)this + 0x21) = a5; /*0x9163c0*/
  *((_DWORD *)this + 0x22) = a6; /*0x9163c9*/
  *(_DWORD *)this = &off_A9D044; /*0x9163d2*/
  *((_OWORD *)this + 6) = *a2; /*0x9163de*/
  *((_OWORD *)this + 7) = *a3; /*0x9163e8*/
  *((_DWORD *)this + 0x20) = a4; /*0x9163ec*/
  return this; /*0x9163f4*/
}
