float *sub_6D66E0()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x38u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_6EC220(v0);
  *(_DWORD *)v1 = &NiTransformInterpolator::`vftable';
  *((_DWORD *)v1 + 3) = dword_B24260;
  *((_DWORD *)v1 + 4) = dword_B24264;
  *((_DWORD *)v1 + 5) = dword_B24268;
  *((_DWORD *)v1 + 6) = dword_B3CBA4;
  *((_DWORD *)v1 + 7) = dword_B3CBA8;
  *((_DWORD *)v1 + 8) = dword_B3CBAC;
  *((_DWORD *)v1 + 9) = dword_B3CBB0;
  v1[0xA] = flt_A79E10;
  v1[0xB] = 0.0;
  *((_WORD *)v1 + 0x18) = 0;
  *((_WORD *)v1 + 0x19) = 0;
  *((_WORD *)v1 + 0x1A) = 0;
  return v1;
}
