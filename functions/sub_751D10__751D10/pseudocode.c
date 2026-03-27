float *sub_751D10()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x34u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_752BF0(v0);
  v1[7] = 1.0;
  *((_WORD *)v1 + 0xC) = 1;
  v1[9] = 0.0;
  *((_WORD *)v1 + 0x10) = 1;
  v1[0xA] = 0.0;
  *((_WORD *)v1 + 0x11) = 1;
  v1[0xB] = 0.0;
  *(_DWORD *)v1 = &NiPSysSpawnModifier::`vftable';
  v1[0xC] = 0.0;
  return v1;
}
