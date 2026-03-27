float *sub_6EA8C0()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x40u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_6CC4E0(v0);
  *(_DWORD *)v1 = &NiBlendPoint3Interpolator::`vftable';
  *((_DWORD *)v1 + 0xC) = dword_B24FC8;
  *((_DWORD *)v1 + 0xD) = dword_B24FCC;
  *((_DWORD *)v1 + 0xE) = dword_B24FD0;
  *((_BYTE *)v1 + 0x3C) = 0;
  return v1;
}
