char __thiscall sub_7808C0(float *this, int a2)
{
  int v3; // edx
  double v4; // st7
  float v6; // [esp+4h] [ebp+4h]

  v3 = *(_DWORD *)(a2 + 0x54); /*0x7808c4*/
  if ( *((_DWORD *)this + 0x11) == v3 ) /*0x7808ca*/
    return 0; /*0x780938*/
  *((_DWORD *)this + 0x11) = v3; /*0x7808cc*/
  v6 = *(float *)(a2 + 0x50); /*0x7808d2*/
  *(this + 0xC) = *(float *)(a2 + 0x40); /*0x7808d9*/
  *(this + 0xD) = *(float *)(a2 + 0x44); /*0x7808df*/
  *(this + 0xE) = *(float *)(a2 + 0x48); /*0x7808e5*/
  *(this + 0xF) = v6; /*0x7808ec*/
  *(this + 4) = *(float *)(a2 + 0x1C); /*0x7808f2*/
  *(this + 5) = *(float *)(a2 + 0x20); /*0x7808f8*/
  *(this + 6) = *(float *)(a2 + 0x24); /*0x7808fe*/
  *(this + 7) = v6; /*0x780901*/
  *this = *(float *)(a2 + 0x28); /*0x780907*/
  *(this + 1) = *(float *)(a2 + 0x2C); /*0x78090c*/
  *(this + 2) = *(float *)(a2 + 0x30); /*0x780912*/
  *(this + 3) = v6; /*0x780915*/
  *(this + 8) = *(float *)(a2 + 0x34); /*0x78091b*/
  *(this + 9) = *(float *)(a2 + 0x38); /*0x780921*/
  *(this + 0xA) = *(float *)(a2 + 0x3C); /*0x780927*/
  *(this + 0xB) = v6; /*0x78092a*/
  v4 = *(float *)(a2 + 0x4C); /*0x78092d*/
  *(this + 0x10) = v4; /*0x780932*/
  return 1; /*0x780935*/
}
