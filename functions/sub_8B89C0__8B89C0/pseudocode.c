_DWORD *__thiscall sub_8B89C0(_DWORD *this, _OWORD *a2, _OWORD *a3, int a4, int a5, int a6, _WORD *a7)
{
  sub_8F5750(this, a7, 0); /*0x8b89ca*/
  *this = &off_A98060; /*0x8b89db*/
  *((_OWORD *)this + 2) = *a2; /*0x8b89e8*/
  *((_OWORD *)this + 3) = *a3; /*0x8b89f3*/
  *(this + 0x10) = a4; /*0x8b89f7*/
  *(this + 0x11) = a5; /*0x8b89fa*/
  *(this + 0x13) = a6; /*0x8b89fd*/
  *(this + 0x12) = 0x437A0000; /*0x8b8a00*/
  return this; /*0x8b8a09*/
}
