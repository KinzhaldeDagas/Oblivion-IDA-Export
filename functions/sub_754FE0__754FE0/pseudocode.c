float *sub_754FE0()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x34u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_75E800(v0);
  v1[0xC] = 0.0;
  *(_DWORD *)v1 = &NiPSysRadialFieldModifier::`vftable';
  return v1;
}
