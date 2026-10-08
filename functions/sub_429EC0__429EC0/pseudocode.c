// Constructs ExtraTimeLeft: type 0x2D and supplied float value.
float *__thiscall ExtraTimeLeft_ctor(float *this, float a2)
{
  *(this + 3) = a2; /*0x429ec6*/
  *((_BYTE *)this + 4) = 0x2D; /*0x429ec9*/
  *(this + 2) = 0.0; /*0x429ecd*/
  *(_DWORD *)this = &ExtraTimeLeft::`vftable'; /*0x429ed4*/
  return this; /*0x429eda*/
}
