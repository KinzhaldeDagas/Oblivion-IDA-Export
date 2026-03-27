float *sub_6DA740()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x20u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_6EC220(v0);
  *(_DWORD *)v1 = &NiPoint3Interpolator::`vftable';
  *((_DWORD *)v1 + 3) = dword_B24FC8;
  *((_DWORD *)v1 + 4) = dword_B24FCC;
  *((_DWORD *)v1 + 5) = dword_B24FD0;
  v1[6] = 0.0;
  v1[7] = 0.0;
  return v1;
}
