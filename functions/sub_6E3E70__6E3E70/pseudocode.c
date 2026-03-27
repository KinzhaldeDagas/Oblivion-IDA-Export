float *__thiscall sub_6E3E70(_DWORD *this, int a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x24u);
  v4 = v3;
  if ( v3 )
  {
    sub_6EC220(v3);
    *(_DWORD *)v4 = &NiColorInterpolator::`vftable';
    *((_DWORD *)v4 + 3) = dword_B24FD4;
    *((_DWORD *)v4 + 4) = dword_B24FD8;
    *((_DWORD *)v4 + 5) = dword_B24FDC;
    *((_DWORD *)v4 + 6) = dword_B24FE0;
    v4[7] = 0.0;
    v4[8] = 0.0;
  }
  else
  {
    v4 = 0;
  }
  sub_6D98F0(this, v4, a2);
  return v4;
}
