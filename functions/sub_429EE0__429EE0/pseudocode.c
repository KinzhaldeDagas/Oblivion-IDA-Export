// Constructs ExtraCharge: type 0x2E and supplied float value.
float *__thiscall ExtraCharge_ctor(float *this, float a2)
{
  *(this + 3) = a2; /*0x429ee6*/
  *((_BYTE *)this + 4) = 0x2E; /*0x429ee9*/
  *(this + 2) = 0.0; /*0x429eed*/
  *(_DWORD *)this = &ExtraCharge::`vftable'; /*0x429ef4*/
  return this; /*0x429efa*/
}
