long double __thiscall sub_957E30(float *this, int a2)
{
  long double v2; // st7
  long double v3; // st7

  v2 = fabs((double)(*(_DWORD *)(a2 + 0x14) - *(_DWORD *)(a2 + 0x34))) * *(float *)(a2 + 0x1C);
  if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
  {
    v3 = v2 * v2;
  }
  else
  {
    v3 = (v2 - flt_A41328) * flt_A5977C;
    if ( v3 < *(float *)&SrcStr )
      return *(float *)&SrcStr;
  }
  return v3 * (v3 * v3 * v3) * *(this + 4);
}
