float *__thiscall sub_537E40(float *this, float a2)
{
  float *v3; // eax
  double v4; // st7

  sub_8B2170(this); /*0x537e68*/
  *(this + 5) = 1.0; /*0x537e71*/
  *(_DWORD *)this = &TESWaterListener::`vftable'; /*0x537e7c*/
  *((_DWORD *)this + 8) = 1; /*0x537e82*/
  v3 = (float *)FormHeapAlloc(4u); /*0x537e89*/
  v4 = a2 * hkFactor; /*0x537e92*/
  *((_DWORD *)this + 6) = v3; /*0x537e98*/
  *v3 = v4; /*0x537e9e*/
  *(this + 9) = 0.0; /*0x537ea0*/
  *(this + 0xA) = 0.0; /*0x537ea7*/
  return this; /*0x537eb0*/
}
