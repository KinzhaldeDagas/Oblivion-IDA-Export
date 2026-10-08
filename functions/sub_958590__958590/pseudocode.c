_DWORD *__thiscall sub_958590(_DWORD *this, _OWORD *a2, int a3, int a4)
{
  *(this + 0x14) = 0; /*0x958598*/
  *((_WORD *)this + 3) = 1; /*0x9585a4*/
  *(this + 0x15) = 1; /*0x9585a8*/
  *((_OWORD *)this + 1) = 0; /*0x9585ae*/
  *((_OWORD *)this + 2) = 0; /*0x9585b2*/
  *((_OWORD *)this + 3) = 0; /*0x9585b6*/
  *(this + 4) = 0x3F800000; /*0x9585bf*/
  *(this + 9) = 0x3F800000; /*0x9585c2*/
  *(this + 0xE) = 0x3F800000; /*0x9585c5*/
  *((_OWORD *)this + 4) = 0; /*0x9585cb*/
  *this = &MobileObject::`vftable'; /*0x9585cf*/
  *((_OWORD *)this + 6) = *a2; /*0x9585db*/
  *(this + 0x1C) = a3; /*0x9585e2*/
  *(this + 0x1D) = a4; /*0x9585e5*/
  return this; /*0x9585ea*/
}
