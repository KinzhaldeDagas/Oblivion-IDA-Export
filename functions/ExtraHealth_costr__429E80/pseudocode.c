float *__thiscall ExtraHealth_costr(float *this, float a2)
{
  *(this + 3) = a2; /*0x429e86*/
  *((_BYTE *)this + 4) = 0x2B; /*0x429e89*/
  *(this + 2) = 0.0; /*0x429e8d*/
  *(_DWORD *)this = &ExtraHealth::`vftable'; /*0x429e94*/
  return this; /*0x429e9a*/
}
