void __thiscall sub_75D2B0(_DWORD *this, float a2)
{
  int v2; // ecx
  double v3; // st7

  v2 = *(this + 0x11); /*0x75d2b4*/
  if ( a2 < dbl_A2FC68 ) /*0x75d2c6*/
    a2 = 0.0; /*0x75d2ca*/
  v3 = a2; /*0x75d2ce*/
  if ( a2 > dbl_A2F928 ) /*0x75d2dd*/
    v3 = (float)1.0; /*0x75d2e7*/
  *(float *)(v2 + 0x5C) = v3; /*0x75d2eb*/
}
