_OWORD *__thiscall sub_8E79A0(_OWORD *this, _OWORD *a2, _OWORD *a3)
{
  *this = *a2; /*0x8e79a9*/
  *(this + 1) = *a2; /*0x8e79af*/
  *((_DWORD *)this + 3) = 0; /*0x8e79b8*/
  *((_DWORD *)this + 7) = 0; /*0x8e79bb*/
  *(this + 2) = *a3; /*0x8e79c4*/
  *(this + 3) = *a3; /*0x8e79cb*/
  *(this + 4) = 0; /*0x8e79d2*/
  return a3; /*0x8e79d8*/
}
