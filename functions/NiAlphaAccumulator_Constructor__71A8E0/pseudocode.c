_DWORD *__thiscall NiAlphaAccumulator_Constructor(_DWORD *this)
{
  NiBackToFrontAccumulator_Constructor(this); /*0x71a8e3*/
  *this = &NiAlphaAccumulator::`vftable'; /*0x71a8e8*/
  *((_BYTE *)this + 0x34) = 1; /*0x71a8ee*/
  *((_BYTE *)this + 0x35) = 0; /*0x71a8f2*/
  return this; /*0x71a8f8*/
}
