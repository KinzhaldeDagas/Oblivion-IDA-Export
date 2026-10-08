double __thiscall sub_957E30(float *this, int a2)
{
  long double v2; // st7
  long double v3; // st7

  v2 = fabs((double)(*(_DWORD *)(a2 + 0x14) - *(_DWORD *)(a2 + 0x34))) * *(float *)(a2 + 0x1C); /*0x957e4d*/
  if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) ) /*0x957e50*/
  {
    v3 = v2 * v2; /*0x957e78*/
  }
  else
  {
    v3 = (v2 - flt_A41328) * flt_A5977C; /*0x957e58*/
    if ( v3 < *(float *)&SrcStr ) /*0x957e69*/
      return *(float *)&SrcStr; /*0x957e73*/
  }
  return v3 * (v3 * v3 * v3) * *(this + 4); /*0x957e73*/
}
