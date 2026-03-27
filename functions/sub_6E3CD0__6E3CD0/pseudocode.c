float *sub_6E3CD0()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x24u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_6EC220(v0);
  *(_DWORD *)v1 = &NiColorInterpolator::`vftable';
  *((_DWORD *)v1 + 3) = dword_B24FD4;
  *((_DWORD *)v1 + 4) = dword_B24FD8;
  *((_DWORD *)v1 + 5) = dword_B24FDC;
  *((_DWORD *)v1 + 6) = dword_B24FE0;
  v1[7] = 0.0;
  v1[8] = 0.0;
  return v1;
}
