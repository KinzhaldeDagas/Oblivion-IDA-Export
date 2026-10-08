_DWORD *__thiscall sub_8F3490(_DWORD *this, _OWORD *a2, _OWORD *a3, int a4)
{
  *(this + 3) = a4; /*0x8f349a*/
  *((_WORD *)this + 3) = 1; /*0x8f34a1*/
  *(this + 2) = 0; /*0x8f34a7*/
  *this = &off_A9B2A0; /*0x8f34ae*/
  *((_OWORD *)this + 1) = *a2; /*0x8f34bb*/
  *((_OWORD *)this + 2) = *a3; /*0x8f34c2*/
  *(this + 7) = a4; /*0x8f34c8*/
  *(this + 0xB) = a4; /*0x8f34cb*/
  return this; /*0x8f34ce*/
}
