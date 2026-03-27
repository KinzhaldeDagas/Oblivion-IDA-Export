float *sub_753F10()
{
  float *v0; // eax
  float *v1; // esi

  v0 = (float *)FormHeapAlloc(0x3Cu);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_75E800(v0);
  v1[0xC] = 0.0;
  *(_DWORD *)v1 = &NiPSysTurbulenceFieldModifier::`vftable';
  v1[0xE] = -flt_A7DEB4;
  v1[0xD] = flt_A5A04C;
  return v1;
}
