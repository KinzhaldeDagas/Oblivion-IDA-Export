void __thiscall sub_75D400(_DWORD *this, float a2)
{
  int v2; // ecx
  double v3; // st7

  v2 = *(this + 0x11); /*0x75d404*/
  if ( a2 < dbl_A2FC68 ) /*0x75d416*/
    a2 = 0.0; /*0x75d41a*/
  v3 = a2; /*0x75d41e*/
  if ( a2 > dbl_A2F928 ) /*0x75d42d*/
    v3 = (float)1.0; /*0x75d437*/
  *(float *)(v2 + 0x58) = v3; /*0x75d43b*/
}
