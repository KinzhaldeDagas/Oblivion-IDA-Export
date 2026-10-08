char *__thiscall sub_8CDCB0(char *this, _OWORD *a2, int a3)
{
  sub_8BC8F0(this, 0, 2); /*0x8cdcb9*/
  *((_DWORD *)this + 0x14) = 0; /*0x8cdcbe*/
  *((_DWORD *)this + 0x15) = 0; /*0x8cdcc1*/
  *((_DWORD *)this + 0x16) = 0x80000000; /*0x8cdccc*/
  *((_DWORD *)this + 0x17) = 0; /*0x8cdccf*/
  *((_DWORD *)this + 0x18) = 0; /*0x8cdcd2*/
  *((_DWORD *)this + 0x19) = 0x80000000; /*0x8cdcd5*/
  *((_DWORD *)this + 9) = 0xFFFFFFEC; /*0x8cdcdc*/
  *(_DWORD *)this = &off_A99BF0; /*0x8cdce3*/
  *((_DWORD *)this + 0x24) = 0; /*0x8cdce9*/
  *((_DWORD *)this + 0x25) = 0; /*0x8cdcef*/
  *((_DWORD *)this + 0x26) = 0x80000000; /*0x8cdcf5*/
  *((_OWORD *)this + 7) = *a2; /*0x8cdcfe*/
  *((_OWORD *)this + 8) = a2[1]; /*0x8cdd0a*/
  *((_DWORD *)this + 0xC) = a3; /*0x8cdd11*/
  return this; /*0x8cdd14*/
}
