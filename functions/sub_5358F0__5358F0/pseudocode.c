float *__thiscall sub_5358F0(float *this, float a2, int a3)
{
  double v4; // st7

  v4 = flt_A562B0; /*0x535918*/
  *(_DWORD *)this = &hkAllCdPointCollector::`vftable'; /*0x535921*/
  *((_DWORD *)this + 4) = this + 8; /*0x535927*/
  *((_DWORD *)this + 6) = 0x80000008; /*0x53592c*/
  *(this + 1) = v4; /*0x535933*/
  *(this + 5) = 0.0; /*0x535936*/
  *(this + 0x68) = 0.0; /*0x53593d*/
  sub_535730(this, a2, a3); /*0x535957*/
  return this; /*0x53595e*/
}
