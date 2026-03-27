float *sub_74E1C0()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x38u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_752BF0(v0);
  v1[6] = 0.0;
  *(_DWORD *)v1 = &NiPSysRotationModifier::`vftable';
  v1[7] = 0.0;
  v1[8] = 0.0;
  v1[9] = 0.0;
  *((_DWORD *)v1 + 0xA) = dword_B258D0;
  *((_DWORD *)v1 + 0xB) = dword_B258D4;
  *((_DWORD *)v1 + 0xC) = dword_B258D8;
  *((_BYTE *)v1 + 0x34) = 1;
  *((_BYTE *)v1 + 0x35) = 0;
  return v1;
}
