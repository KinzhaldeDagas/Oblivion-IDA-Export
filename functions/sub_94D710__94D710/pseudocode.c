_WORD *__thiscall sub_94D710(_WORD *this, _OWORD *a2, _OWORD *a3, _OWORD *a4, _OWORD *a5)
{
  *(this + 3) = 1; /*0x94d718*/
  *((_DWORD *)this + 0x14) = 0; /*0x94d71e*/
  *((_DWORD *)this + 0x15) = 7; /*0x94d725*/
  *((_OWORD *)this + 1) = 0; /*0x94d72f*/
  *((_OWORD *)this + 2) = 0; /*0x94d733*/
  *((_OWORD *)this + 3) = 0; /*0x94d737*/
  *((_DWORD *)this + 4) = 0x3F800000; /*0x94d740*/
  *((_DWORD *)this + 9) = 0x3F800000; /*0x94d743*/
  *((_DWORD *)this + 0xE) = 0x3F800000; /*0x94d746*/
  *((_OWORD *)this + 4) = 0; /*0x94d74c*/
  *(_DWORD *)this = &off_AA2C14; /*0x94d750*/
  *((_OWORD *)this + 6) = *a2; /*0x94d75c*/
  *((_OWORD *)this + 7) = *a4; /*0x94d766*/
  *((_OWORD *)this + 8) = *a3; /*0x94d76d*/
  *((_OWORD *)this + 9) = *a5; /*0x94d77a*/
  return this; /*0x94d783*/
}
