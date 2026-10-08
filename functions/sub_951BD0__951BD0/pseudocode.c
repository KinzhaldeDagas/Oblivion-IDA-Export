float *__thiscall sub_951BD0(int this, _OWORD *a2, _OWORD *a3, _OWORD *a4)
{
  float *result; // eax

  *(_DWORD *)(this + 8) = 4; /*0x951bdf*/
  *(_OWORD *)(this + 0x30) = *a2; /*0x951be9*/
  *(_OWORD *)(this + 0x40) = *a3; /*0x951bf0*/
  *(_OWORD *)(this + 0x20) = *a4; /*0x951bf7*/
  *(_DWORD *)(this + 0x50) = 0; /*0x951bfe*/
  *(_OWORD *)(this + 0x70) = a2[1]; /*0x951c05*/
  *(_OWORD *)(this + 0x80) = a3[1]; /*0x951c0d*/
  *(_OWORD *)(this + 0x60) = a4[1]; /*0x951c18*/
  *(_DWORD *)(this + 0x90) = 0; /*0x951c1c*/
  *(_OWORD *)(this + 0xB0) = a2[2]; /*0x951c26*/
  *(_OWORD *)(this + 0xC0) = a3[2]; /*0x951c31*/
  *(_OWORD *)(this + 0xA0) = a4[2]; /*0x951c3c*/
  *(_DWORD *)(this + 0xD0) = 0; /*0x951c43*/
  *(_OWORD *)(this + 0xF0) = a2[3]; /*0x951c4d*/
  *(_OWORD *)(this + 0x100) = a3[3]; /*0x951c58*/
  *(_OWORD *)(this + 0xE0) = a4[3]; /*0x951c65*/
  *(_DWORD *)(this + 0x110) = 0; /*0x951c6c*/
  result = sub_959480((__m128 *)this); /*0x951c72*/
  *(_DWORD *)(this + 0xC) = 0; /*0x951c77*/
  return result; /*0x951c7b*/
}
