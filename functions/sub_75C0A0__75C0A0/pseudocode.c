void __thiscall sub_75C0A0(_DWORD *this, float a2)
{
  int v2; // ecx
  double v3; // st7

  v2 = *(this + 0x11); /*0x75c0a4*/
  if ( a2 < dbl_A2FC68 ) /*0x75c0b6*/
    a2 = 0.0; /*0x75c0ba*/
  v3 = a2; /*0x75c0be*/
  if ( a2 > dbl_A2F928 ) /*0x75c0cd*/
    v3 = (float)1.0; /*0x75c0d7*/
  *(float *)(v2 + 0x64) = v3; /*0x75c0db*/
}
