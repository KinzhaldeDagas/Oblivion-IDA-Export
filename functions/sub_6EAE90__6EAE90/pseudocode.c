float *sub_6EAE90()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x44u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_6CC4E0(v0);
  *(_DWORD *)v1 = &NiBlendColorInterpolator::`vftable';
  *((_DWORD *)v1 + 0xC) = dword_B24FD4;
  *((_DWORD *)v1 + 0xD) = dword_B24FD8;
  *((_DWORD *)v1 + 0xE) = dword_B24FDC;
  *((_DWORD *)v1 + 0xF) = dword_B24FE0;
  *((_BYTE *)v1 + 0x40) = 0;
  return v1;
}
