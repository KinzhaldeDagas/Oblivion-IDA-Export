float *__thiscall sub_890130(float *this, _OWORD *a2, float a3, float a4)
{
  double v4; // st6
  float v6; // [esp+Ch] [ebp-10h]
  float v7; // [esp+10h] [ebp-Ch]

  *(_DWORD *)this = &bhkCharacterListener::`vftable'; /*0x890142*/
  *((_OWORD *)this + 1) = *a2; /*0x89014b*/
  v6 = cos(a3); /*0x890154*/
  *(this + 8) = v6; /*0x89015e*/
  *(this + 1) = 0.0; /*0x890167*/
  *(this + 0x16) = a4; /*0x89016a*/
  *((_DWORD *)this + 9) = 0x1F; /*0x89016d*/
  v4 = flt_A96588; /*0x890174*/
  *(this + 0xA) = 0.0; /*0x89017a*/
  *(this + 0x15) = v4; /*0x89017d*/
  *((_OWORD *)this + 3) = 0; /*0x890180*/
  *(this + 0x14) = v4; /*0x890184*/
  *((_BYTE *)this + 0x60) = 0; /*0x890187*/
  *(this + 0x19) = 0.0; /*0x89018a*/
  *((_BYTE *)this + 0x61) = 0; /*0x890191*/
  v7 = sin(a3); /*0x89019c*/
  *(this + 0x17) = a4 / v7 * v6; /*0x8901ae*/
  return this; /*0x8901b2*/
}
