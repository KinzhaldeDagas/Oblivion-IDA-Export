int __thiscall sub_6D18A0(_DWORD *this, float *a2)
{
  int result; // eax
  double v3; // st7

  result = *(this + 0x14); /*0x6d18a1*/
  v3 = (double)result; /*0x6d18a4*/
  if ( result < 0 ) /*0x6d18a9*/
    v3 = v3 + flt_A2FC78; /*0x6d18ab*/
  *a2 = v3; /*0x6d18b5*/
  return result; /*0x6d18b8*/
}
