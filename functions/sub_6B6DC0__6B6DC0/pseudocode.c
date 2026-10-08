float *__thiscall sub_6B6DC0(float *this, int a2, int a3, int a4)
{
  *(this + 0x14) = 0.0; /*0x6b6dcc*/
  *(this + 0xB) = 0.0; /*0x6b6dcf*/
  *(this + 0x15) = 0.0; /*0x6b6dd2*/
  *(this + 0xC) = 0.0; /*0x6b6dd5*/
  *(this + 0x13) = 0.0; /*0x6b6dd8*/
  *(this + 0x10) = 0.0; /*0x6b6ddb*/
  *((_WORD *)this + 0xE) = 0; /*0x6b6dde*/
  *((_WORD *)this + 0x22) = 0; /*0x6b6de2*/
  *((_WORD *)this + 0x23) = 0; /*0x6b6de6*/
  *((_BYTE *)this + 0x4A) = 0; /*0x6b6dea*/
  *((_BYTE *)this + 0x4B) = 0; /*0x6b6ded*/
  *(this + 0xD) = 0.0; /*0x6b6df0*/
  *((_DWORD *)this + 3) = a3; /*0x6b6e08*/
  *(_DWORD *)this = a4; /*0x6b6e0f*/
  *((_BYTE *)this + 0x10) = 0xFF; /*0x6b6e11*/
  *((_BYTE *)this + 0x11) = 2; /*0x6b6e15*/
  *(this + 0xE) = 0.0047237873; /*0x6b6e19*/
  *((_WORD *)this + 0x24) = (int)(flt_B23C58 * fCostant_100); /*0x6b6e3a*/
  if ( (a4 & 0x4000) != 0 ) /*0x6b6e47*/
    ++unk_B3C20C; /*0x6b6e49*/
  ++unk_B3C210; /*0x6b6e51*/
  *(this + 0xF) = 1.0; /*0x6b6e57*/
  return this; /*0x6b6e5c*/
}
