float *__thiscall bhkSphereShapeProbeCollector_InitLayer1C(float *this, float a2, int a3)
{
  double v4; // st7

  v4 = flt_A5613C; /*0x533c68*/
  *(_DWORD *)this = &hkAllCdPointCollector::`vftable'; /*0x533c71*/
  *((_DWORD *)this + 4) = this + 8; /*0x533c77*/
  *((_DWORD *)this + 6) = 0x80000008; /*0x533c7c*/
  *(this + 1) = v4; /*0x533c83*/
  *(this + 5) = 0.0; /*0x533c86*/
  *(this + 0x68) = 0.0; /*0x533c8d*/
  sub_533A00((bhkRefObject **)this, a2, a3); /*0x533ca7*/
  return this; /*0x533cae*/
}
