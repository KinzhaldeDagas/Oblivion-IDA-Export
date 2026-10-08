float *__thiscall sub_89DC10(float *this, _OWORD *a2, float *a3)
{
  *((_WORD *)this + 3) = 1; /*0x89dc2a*/
  *(this + 2) = 0.0; /*0x89dc30*/
  *(_DWORD *)this = &off_A96F78; /*0x89dc37*/
  *((_OWORD *)this + 0xD) = 0; /*0x89dc3d*/
  *((_OWORD *)this + 0xE) = 0; /*0x89dc44*/
  sub_8E7B20(this + 4, a2, a3); /*0x89dc4b*/
  *(this + 0x32) = 0.0; /*0x89dc50*/
  *(this + 0x33) = 0.0; /*0x89dc5a*/
  return this; /*0x89dc66*/
}
