float *__thiscall sub_88A4F0(float *this)
{
  sub_8A9510(this); /*0x88a4f3*/
  *(_DWORD *)this = &bhkWorldCinfo::`vftable'{for `bhkWorldCinfo'}; /*0x88a4fa*/
  *(this + 4) = 0.0; /*0x88a500*/
  *(this + 5) = flt_A46B20; /*0x88a509*/
  *(this + 6) = 0.0; /*0x88a50c*/
  *(this + 7) = 0.0; /*0x88a50f*/
  *(this + 0x14) = kFaceEarNormalMatchRadius; /*0x88a518*/
  *(this + 9) = flt_A95BF0; /*0x88a521*/
  *((_BYTE *)this + 0x95) = fromISimType; /*0x88a529*/
  *((_BYTE *)this + 0x8C) = 0; /*0x88a52f*/
  *((_BYTE *)this + 0x28) = 3; /*0x88a536*/
  return this; /*0x88a53c*/
}
